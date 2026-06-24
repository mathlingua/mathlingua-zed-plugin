# Mathlingua for Zed

Syntax highlighting for [Mathlingua](https://github.com/dominickramer/mathlingua) (`.mlg`) files.

## Install as a dev extension

1. Open Zed.
2. Open the command palette and run **zed: install dev extension**.
3. Select this directory (`zed-plugin/`).

Zed will compile the bundled tree-sitter grammar in `grammars/mathlingua/` and
load the language config from `languages/mathlingua/`.

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
