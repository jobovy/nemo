# $Header: /home/cvsroot/nemo/src/tools/makeindex/Makefile,v 1.1.1.1 1992/05/05 23:54:13 teuben Exp $
CFLAGS=-O
help:
	@echo No help yet

all: getopt.o shift.o
	cd libglob;make all
	cd libprofile;make all
	cd indexsrc;make all

install: all
	mv indexsrc/index .

clean:
	-rm index getopt.o shift.o
	cd libglob;make clean
	cd libprofile;make clean
	cd indexsrc;make clean

# target for the forget full and naming consistency
makeindex: all
	cp indexsrc/index makeindex
