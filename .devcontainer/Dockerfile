FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    gdb \
    git \
    ninja-build \
    pkg-config \
    clang \
    lldb \
    lld \
    && rm -rf /var/lib/apt/lists/*

RUN useradd -m vscode && \
    apt-get update && apt-get install -y sudo && \
    echo "vscode ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers
    
RUN chmod +x scripts/*
RUN export PATH="$PATH:/workspace/scripts"
RUN source ~./bashrc


USER vscode
WORKDIR /workspace
