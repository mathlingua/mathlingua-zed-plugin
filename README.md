# Mathlingua for Zed

Syntax highlighting, live entry previews, live page preview integration, inline diagnostics, and per-line type information for
[Mathlingua](https://github.com/dominickramer/mathlingua) (`.mlg`) files.

Everything comes from `mlg lsp` — a language server built into the `mlg`
binary. On every save, it re-runs `mlg check` for the project containing the
saved file and publishes errors/warnings to Zed. While that check is running,
Zed displays an indeterminate spinner labeled **mlg check**.

## Live Entry Preview

While adding or editing an entry in an `.mlg` buffer, place the cursor anywhere inside the entry and press <kbd>ctrl-k</kbd> <kbd>ctrl-i</kbd> (Zed's `editor::Hover`, also bound to hovering the mouse). Zed displays a rendered live preview of the entire entry:

- **Mathematical formatting:** Command headings and formulations are rendered using LaTeX math notation.
- **Structured clauses:** Sections (`when:`, `then:`, `given:`, `where:`, `satisfies:`, `Proof:`, etc.) are clearly formatted with bulleted items, labels, and indented sub-clauses.
- **Real-time updates:** The preview updates live as you type, driven by in-memory buffer synchronization before you even save the file.
- **Type information:** If the hovered line was type-checked by `mlg check`, its resolved expression type breakdown appears right below the entry preview.
- **Quick links:** Includes a direct link to open the live web viewer (`http://localhost:3000`).

## Live Page Preview (`mlg view`)

To view your entire document or collection with interactive KaTeX rendering and automatic reload on file changes:

1. **Via Zed Task:** Open the Command Palette (<kbd>cmd-shift-p</kbd> on macOS / <kbd>ctrl-shift-p</kbd> on Linux) and run **task: spawn** → **Mathlingua: Start Live Preview**.
2. **Via Terminal:** Run `mlg view --watch` in your workspace root.
3. **Via Browser:** Navigate to `http://localhost:3000` (or click the preview link inside any hover tooltip).

Whenever you save changes in Zed, the viewer automatically reloads to reflect the updated collection.

## Slash Command

In the Zed Assistant panel, type `/preview` to view quick guidance and links for the in-editor entry preview and browser viewer.

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
hover is how in-editor rich previews and type information are surfaced.

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
