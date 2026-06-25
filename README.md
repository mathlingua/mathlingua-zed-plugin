# Mathlingua for Zed

Syntax highlighting and inline diagnostics for
[Mathlingua](https://github.com/dominickramer/mathlingua) (`.mlg`) files.

Diagnostics come from `mlg lsp` — a tiny LSP server built into the `mlg`
binary. On every save, it re-runs `mlg check` for the project containing the
saved file and publishes errors/warnings to Zed.

## Install as a dev extension

1. Build `mlg` (the binary must be on your `PATH`):

   ```sh
   cd /Users/kramer/Developer/mathlingua/mathlingua
   cargo install --path .
   ```

   (Or symlink `target/release/mlg` somewhere on `PATH`.)

2. Open Zed, run **zed: install dev extension**, and select this directory
   (`zed-plugin/`).

Zed compiles the bundled tree-sitter grammar in `../tree-sitter-mathlingua/`,
the Rust → WASM extension shim that launches the LSP, and loads the language
config from `languages/mathlingua/`.

## Layout

```
zed-plugin/                            this extension
  extension.toml
  languages/mathlingua/
    config.toml                        file types, brackets, indent
    highlights.scm                     tree-sitter highlight queries

../tree-sitter-mathlingua/             grammar (separate git repo)
  grammar.js
  src/parser.c                         generated parser (committed)
  package.json
```

Zed requires every grammar to be a git repo pinned by commit. The grammar lives
in a sibling directory at `../tree-sitter-mathlingua/`, referenced by `file://`
URL in `extension.toml`. On install Zed clones that repo into
`zed-plugin/grammars/mathlingua/`.

## Regenerating the parser

After editing `grammar.js`:

```sh
cd ../tree-sitter-mathlingua
npx tree-sitter generate
git add -A && git commit -m "regen"
git rev-parse HEAD
```

Paste the hash into the `commit = "…"` line of `extension.toml`, delete
`zed-plugin/grammars/` if it exists, then rerun **zed: install dev extension**.
