#!/bin/bash
# Copyright (c) eContriver, LLC.

set -e

CONFIG_FILE=.vimrc
SRC=/hydrogen/infra/${CONFIG_FILE}
DEST=/root/${CONFIG_FILE}
if [ ! -f "$DEST" ]
then
  echo "Copying '${SRC}' to '${DEST}'"
  cp $SRC $DEST
else
  echo "Found existing file '${DEST}' - skipping copy"
fi

CONFIG_DIR=.vim
SRC=/hydrogen/infra/${CONFIG_DIR}
DEST=/root/${CONFIG_DIR}
if [ ! -d "$DEST" ]
then
  echo "Copying '${SRC}' to '${DEST}'"
  cp -r $SRC $DEST
else
  echo "Found existing directory '${DEST}' - skipping copy"
fi

CONFIG_FILE=init.gradle
SRC=/hydrogen/infra/${CONFIG_FILE}
DEST=/root/.gradle/${CONFIG_FILE}
if [ ! -f "$DEST" ]
then
  echo "Copying '${SRC}' to '${DEST}'"
  mkdir $(dirname $DEST)
  cp $SRC $DEST
else
  echo "Found existing file '${DEST}' - skipping copy"
fi

