# Mathlingua for Zed

Syntax highlighting, inline diagnostics, and per-line type information for
[Mathlingua](https://github.com/dominickramer/mathlingua) (`.mlg`) files.

Everything comes from `mlg lsp` — a tiny LSP server built into the `mlg`
binary. On every save, it re-runs `mlg check` for the project containing the
saved file and publishes errors/warnings to Zed.

## Type information

Put the cursor on a line and press <kbd>ctrl-k</kbd> <kbd>ctrl-i</kbd> (Zed's
`editor::Hover`, also bound to hovering the mouse) to see the type of every
expression, sub-expression, and statement on that line:

```
Types on line 25 (from the last `mlg check`)

\apply:of{m}:to{x}:and{y}:on{X} = e    is \\statement
  \apply:of{m}:to{x}:and{y}:on{X}      (no type resolved)
    m                                  is \operation:on{X}
    x                                  is \element:of{X}
    y                                  is \element:of{X}
    X                                  is \set
  e                                    is \element:of{X}
```

Sub-expressions are indented under the expression that contains them.
`(no type resolved)` means the checker could not determine a type — usually the
same reason an error is reported on or near that line.

Types are resolved by the same `mlg check` that produces diagnostics, so they
refresh **only when you save** (or first open) a file. Checking walks the whole
collection, so doing it per keystroke would be unusable. Between saves the last
resolved answer is served as-is; if the file has been edited since, the popup
says so.

Zed extensions cannot add panels of their own — the extension API covers
language servers, grammars, themes, slash commands, and context servers — so
hover is how this information is surfaced.

### Limitations

- A formulation that spans several source lines is reported on its first line.
- A line the checker never reaches (inside an item it could not parse, or a
  form that is validated structurally rather than type-checked) has no types.

## Install as a dev extension

1. Build `mlg` (the binary must be on your `PATH`):

   ```sh
    cd /path/to/mathlingua
   cargo install --path .
   ```

   (Or symlink `target/release/mlg` somewhere on `PATH`.)

2. Open Zed, run **zed: install dev extension**, and select this directory
   (the cloned `mathlingua-zed-plugin/` directory).

   Zed clones the pinned tree-sitter grammar, compiles the Rust to WASM
   extension shim that launches the LSP, and loads the language config from
   `languages/mathlingua/`.

## Layout

```
mathlingua-zed-plugin/                 this extension
  extension.toml
  languages/mathlingua/
    config.toml                        file types, brackets, indent
    highlights.scm                     tree-sitter highlight queries

grammar branch of this repository       grammar source
  grammar.js
  src/parser.c                          generated parser
```

Zed requires every grammar to be a Git repository pinned by commit. The
grammar is stored on this repository's `grammar` branch and referenced by its
public HTTPS URL in `extension.toml`, so no local paths or additional clones
are required. On install Zed clones it into
`mathlingua-zed-plugin/grammars/mathlingua/`.

## Regenerating the parser

To update the grammar branch after editing `grammar.js`:

```sh
npx tree-sitter generate
git add -A && git commit -m "regen"
git push origin HEAD:grammar
```

Paste the new commit hash into the `commit = "…"` line of `extension.toml`,
delete `mathlingua-zed-plugin/grammars/` if it exists, then rerun **zed: install
dev extension**.
