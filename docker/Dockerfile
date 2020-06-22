# Copyright (c) 2020 eContriver LLC
# See README.md

FROM ubuntu:18.04

RUN dpkg --add-architecture i386

ENV TZ=America/Denver
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

####
# Download 
RUN apt-get update && apt-get install -y \
  curl \
  unzip \
  xorg \
  default-jdk \
  libz1 \
  libncurses5 \
  libbz2-1.0:i386 \
  libstdc++6 \
  libbz2-1.0 \
  lib32stdc++6 \
  lib32z1 \
  python2.7 \
  python-pip \
  cmake \
  pkg-config \
  libfontconfig1-dev \
  build-essential libgtk-3-dev \
  libglew-dev \
  libcurl4-openssl-dev \
  libsqlite3-dev \
  vim-gnome \
  vim \
  ant \
  iputils-ping \
  locate \
  git \
  && apt-get clean && apt-get purge

RUN apt-get update && apt-get install -y \
  ninja-build \
  && apt-get clean && apt-get purge

####
# Index
RUN updatedb
