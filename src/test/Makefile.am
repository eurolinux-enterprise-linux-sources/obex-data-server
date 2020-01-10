noinst_PROGRAMS =					\
	ods-dbus-test

ods_dbus_test_SOURCES =				\
	../src/ods-marshal.h			\
	../src/ods-marshal.c			\
	ods-dbus-test.c

ods_dbus_test_LDADD =				\
	@GLIB_LIBS@						\
	@DBUS_LIBS@						\
	@BLUEZ_LIBS@
	
AM_CFLAGS = 						\
	@GLIB_CFLAGS@					\
	@DBUS_CFLAGS@					\
	@BLUEZ_CFLAGS@

MAINTAINERCLEANFILES =				\
	*~			      				\
	Makefile.in
	
EXTRA_DIST = ods-server-test.py ods-session-test.py ods-bip-test.py
