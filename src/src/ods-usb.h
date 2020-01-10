#include "config.h"

#include <openobex/obex.h>
#include <openobex/obex_const.h>
#include <glib.h>
#include <usb.h>

#ifdef USE_USB
struct ods_usb_info {
	char *manufacturer;
	char *product;
	char *serial;
	char *configuration;
	char *control_interface;
	char *data_interface_idle;
	char *data_interface_active;
	obex_usb_intf_service_t *service;
	char *path;
};

typedef struct ods_usb_info ods_usb_info;


void ods_usbobex_free_interfaces(GList *list);
GList *ods_usbobex_find_interfaces(void);
#endif /* USE_USB */
