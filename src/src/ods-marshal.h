
#ifndef __ods_marshal_MARSHAL_H__
#define __ods_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* NONE:STRING,STRING,UINT64 (src/ods-marshal.list:1) */
extern void ods_marshal_VOID__STRING_STRING_UINT64 (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);
#define ods_marshal_NONE__STRING_STRING_UINT64	ods_marshal_VOID__STRING_STRING_UINT64

/* NONE:UINT64 (src/ods-marshal.list:2) */
extern void ods_marshal_VOID__UINT64 (GClosure     *closure,
                                      GValue       *return_value,
                                      guint         n_param_values,
                                      const GValue *param_values,
                                      gpointer      invocation_hint,
                                      gpointer      marshal_data);
#define ods_marshal_NONE__UINT64	ods_marshal_VOID__UINT64

/* NONE:STRING,STRING (src/ods-marshal.list:3) */
extern void ods_marshal_VOID__STRING_STRING (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);
#define ods_marshal_NONE__STRING_STRING	ods_marshal_VOID__STRING_STRING

/* NONE:STRING,STRING,STRING (src/ods-marshal.list:4) */
extern void ods_marshal_VOID__STRING_STRING_STRING (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);
#define ods_marshal_NONE__STRING_STRING_STRING	ods_marshal_VOID__STRING_STRING_STRING

/* NONE:STRING,BOOLEAN (src/ods-marshal.list:5) */
extern void ods_marshal_VOID__STRING_BOOLEAN (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);
#define ods_marshal_NONE__STRING_BOOLEAN	ods_marshal_VOID__STRING_BOOLEAN

G_END_DECLS

#endif /* __ods_marshal_MARSHAL_H__ */

