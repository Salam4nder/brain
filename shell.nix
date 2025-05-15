with (import <nixpkgs> {});
mkShell {
  nativeBuildInputs = [
    clang-tools
  ];
  shellHook = ''
    alias ll="ls -l"
    export BRAIN_VERSION=0.0
    export COMMAND=note
    export SUBCOMMAND=create
  '';
}
