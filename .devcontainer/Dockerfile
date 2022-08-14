# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.245.0/containers/cpp/.devcontainer/base.Dockerfile

# [Choice] Debian / Ubuntu version (use Debian 11, Ubuntu 18.04/22.04 on local arm64/Apple Silicon): debian-11, debian-10, ubuntu-22.04, ubuntu-20.04, ubuntu-18.04
ARG VARIANT="bullseye"
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

# ********************************************************
# * Anything else you want to do like clean up goes here *
# ********************************************************
RUN apt-get update && apt-get -y install build-essential cppcheck valgrind clang clangd clang-tidy clang-format lldb llvm gdb git vim\
    && apt-get -y install nodejs npm \
    && apt-get -y install wget \
    && apt-get -y install python3 \
    && apt-get -y install python3-pip \
    && apt-get -y install default-jdk \
    && apt-get -y install lcov

# Install cmake-format
Run pip install cmake_format
