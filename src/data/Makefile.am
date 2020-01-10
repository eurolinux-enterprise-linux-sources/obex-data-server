configdir	= $(SYSCONFDIR)/obex-data-server
config_DATA	= 						\
	capability.xml					\
	imaging_capabilities.xml

if SYSTEMCONFIG
dbusconfigdir       = $(DBUS_CONFIG_DIR)
dbusconfig_DATA     = obex-data-server.conf
endif

servicedir       = $(DBUS_SERVICES_DIR)
service_in_files = obex-data-server.service.in
service_DATA     = obex-data-server.service

if SYSTEMCONFIG
add_args		= --system-bus
endif

$(service_DATA): $(service_in_files) Makefile
	@sed -e "s|\@servicedir\@|$(bindir)|;s|\@add_args\@|$(add_args)|" $< > $@
	
man_MANS = 							\
	obex-data-server.1
	
EXTRA_DIST =						\
	obex-data-server.1				\
	obex-data-server.service.in		\
	obex-data-server.conf			\
	capability.xml					\
	imaging_capabilities.xml

DISTCLEANFILES =					\
	obex-data-server.service
	
MAINTAINERCLEANFILES =				\
	*~			      				\
	Makefile.in
