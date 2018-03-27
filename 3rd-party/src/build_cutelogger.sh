#!/bin/bash
source environment

cd CuteLogger
mkdir -p BUILD_DIR
qmake "OBJECTS_DIR=BUILD_DIR" "DESTDIR=${DESTDIR}" "DLLDESTDIR=${BINDIR}" -spec ${QMAKESPEC} CONFIG+=release CuteLogger.pro
make ${MAKEOPTS}
rm -rf BUILD_DIR
if [ ! -d ${HEADERDIR} ]; 
  then mkdir "${HEADERDIR}"; 
fi
cp -r include/* "${HEADERDIR}"
rm Makefile
