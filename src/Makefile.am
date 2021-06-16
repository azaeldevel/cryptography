
AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = octetos_crytography

octetos_crytography_SOURCES = \
	main.cc String.cc

octetos_crytography_LDFLAGS = $(OPENSSL_CFLGAS)

octetos_crytography_LDADD = $(OPENSSL_LIBS)


