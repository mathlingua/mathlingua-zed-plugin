use zed_extension_api as zed;

struct MathlinguaExtension;

impl zed::Extension for MathlinguaExtension {
    fn new() -> Self {
        Self
    }

    fn language_server_command(
        &mut self,
        _language_server_id: &zed::LanguageServerId,
        worktree: &zed::Worktree,
    ) -> zed::Result<zed::Command> {
        let command = worktree
            .which("mlg")
            .ok_or_else(|| "could not find `mlg` on PATH".to_string())?;

        Ok(zed::Command {
            command,
            args: vec!["lsp".to_string()],
            env: Default::default(),
        })
    }

    fn run_slash_command(
        &self,
        command: zed::SlashCommand,
        _args: Vec<String>,
        _worktree: Option<&zed::Worktree>,
    ) -> Result<zed::SlashCommandOutput, String> {
        match command.name.as_str() {
            "preview" => {
                let text = concat!(
                    "### Mathlingua Live Preview\n\n",
                    "- **In-Editor Live Entry Preview:** Place the cursor on any entry being added or edited and press `ctrl-k ctrl-i` (or hover with the mouse) to see an instant, rendered preview of the entry with mathematical formatting and sections.\n",
                    "- **Web Live Page Preview:** Run `mlg view --watch` in your terminal (or via Zed Tasks) to launch the hot-reloading browser viewer at `http://localhost:3000`.\n"
                ).to_string();
                let len = text.len();
                Ok(zed::SlashCommandOutput {
                    sections: vec![zed::SlashCommandOutputSection {
                        range: (0..len).into(),
                        label: "Mathlingua Live Preview".to_string(),
                    }],
                    text,
                })
            }
            command => Err(format!("unknown slash command: {command}")),
        }
    }
}

zed::register_extension!(MathlinguaExtension);
