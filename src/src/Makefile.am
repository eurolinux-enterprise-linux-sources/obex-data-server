EXTRA_DIST =						\
	ods-manager.xml					\
	ods-marshal.list				\
	ods-server.xml					\
	ods-server-session.xml			\
	ods-session.xml

BUILT_SOURCES = 					\
	ods-manager-dbus-glue.h			\
	ods-marshal.c					\
	ods-marshal.h					\
	ods-server-dbus-glue.h			\
	ods-server-session-dbus-glue.h	\
	ods-session-dbus-glue.h

bin_PROGRAMS =						\
	obex-data-server

obex_data_server_SOURCES =			\
	ods-bluez.h						\
	ods-bluez.c						\
	ods-usb.c						\
	ods-usb.h						\
	ods-capabilities.h				\
	ods-capabilities.c				\
	ods-common.h					\
	ods-common.c					\
	ods-error.h						\
	ods-error.c						\
	ods-folder-listing.h			\
	ods-folder-listing.c			\
	ods-imaging-helpers.h			\
	ods-imaging-helpers.c			\
	ods-main.c						\
	ods-manager.h					\
	ods-manager.c					\
	ods-marshal.h					\
	ods-marshal.c					\
	ods-obex.h						\
	ods-obex.c						\
	ods-server.h					\
	ods-server.c					\
	ods-server-session.h			\
	ods-server-session.c			\
	ods-session.h					\
	ods-session.c

obex_data_server_LDADD =				\
	@GLIB_LIBS@					\
	@BIP_LIBS@					\
	@USB_LIBS@					\
	@DBUS_LIBS@					\
	@BLUEZ_LIBS@					\
	@OPENOBEX_LIBS@

AM_CFLAGS = 						\
	@GLIB_CFLAGS@					\
	@BIP_CFLAGS@					\
	@USB_CFLAGS@					\
	@DBUS_CFLAGS@					\
	@BLUEZ_CFLAGS@					\
	@OPENOBEX_CFLAGS@

ods-manager-dbus-glue.h: ods-manager.xml
	$(DBUS_BINDING_TOOL)	\
		--prefix=ods_manager					\
		--mode=glib-server						\
		--output=ods-manager-dbus-glue.h		\
		$(srcdir)/ods-manager.xml

ods-marshal.c: ods-marshal.list
	@GLIB_GENMARSHAL@ $< --prefix=ods_marshal --body > $@

ods-marshal.h: ods-marshal.list
	@GLIB_GENMARSHAL@ $< --prefix=ods_marshal --header > $@

ods-server-dbus-glue.h: ods-server.xml
	$(DBUS_BINDING_TOOL)	\
		--prefix=ods_server						\
		--mode=glib-server						\
		--output=ods-server-dbus-glue.h			\
		$(srcdir)/ods-server.xml

ods-server-session-dbus-glue.h: ods-server-session.xml
	$(DBUS_BINDING_TOOL)	\
		--prefix=ods_server_session				\
		--mode=glib-server						\
		--output=ods-server-session-dbus-glue.h	\
		$(srcdir)/ods-server-session.xml

ods-session-dbus-glue.h: ods-session.xml
	$(DBUS_BINDING_TOOL)	\
		--prefix=ods_session					\
		--mode=glib-server						\
		--output=ods-session-dbus-glue.h		\
		$(srcdir)/ods-session.xml
	
CLEANFILES = $(BUILT_SOURCES)

MAINTAINERCLEANFILES =				\
	*~			      				\
	Makefile.in
