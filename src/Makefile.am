
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

lib_LTLIBRARIES = liboctetos-crytography.la

noinst_PROGRAMS = octetos_crytography

octetos_crytography_SOURCES = main.cc
octetos_crytography_LDFLAGS = 
octetos_crytography_LDADD = liboctetos-crytography.la

liboctetos_crytography_la_CXXFLAGS =$(OPENSSL_CFLGAS) 
liboctetos_crytography_la_LIBADD = $(OPENSSL_LIBS)   
liboctetos_crytography_la_SOURCES = String.cc

octetos_cryptography_includedir = $(includedir)/octetos/cryptography
octetos_cryptography_include_HEADERS = String.hh

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = octetos-cryptography.pc

EXTRA_DIST = octetos-cryptography.pc.in
