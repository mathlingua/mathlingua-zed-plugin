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
}

zed::register_extension!(MathlinguaExtension);
