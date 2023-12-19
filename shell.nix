let pkgs = import <nixpkgs> {};

in pkgs.mkShell {
  packages = [
    pkgs.gcc13
    pkgs.cmake
    pkgs.gnumake
    pkgs.git
  ];

  shellHook = ''
    export CC=gcc
    export CXX=g++
  '';

}
