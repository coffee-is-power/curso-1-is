{pkgs ? import <nixpkgs> {}}:
pkgs.mkShell {
  nativeBuildInputs =  [pkgs.pkg-config pkgs.cmake pkgs.clang];
}
