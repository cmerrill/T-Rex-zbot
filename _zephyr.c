/* 0.9.7.2 on Fri Jul 16 14:39:55 2010 */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#ifndef WIN32
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>
#include "netinet/in.h"
#include "arpa/inet.h"
#include "sys/time.h"
#include "zephyr/zephyr.h"
#include "com_err.h"
#include "stdlib.h"
#include "string.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/

static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[],     Py_ssize_t nargs, PyObject **args2, PyObject **kwds2, char rqd_kwds[]); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static void __Pyx_WriteUnraisable(char *name); /*proto*/

static PyObject *__Pyx_UnpackItem(PyObject *); /*proto*/
static int __Pyx_EndUnpack(PyObject *); /*proto*/

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i); /*proto*/

static int __Pyx_SetItemInt(PyObject *o, Py_ssize_t i, PyObject *v); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from _zephyr */

static PyObject *__pyx_k9;
static PyObject *__pyx_f_7_zephyr__string_c2p(char *); /*proto*/
static char *__pyx_f_7_zephyr__string_p2c(PyObject *); /*proto*/
static void __pyx_f_7_zephyr__ZUid_c2p(ZUnique_Id_t *,PyObject *); /*proto*/
static void __pyx_f_7_zephyr__ZUid_p2c(PyObject *,ZUnique_Id_t *); /*proto*/
static void __pyx_f_7_zephyr__ZNotice_c2p(ZNotice_t *,PyObject *); /*proto*/
static void __pyx_f_7_zephyr__ZNotice_p2c(PyObject *,ZNotice_t *); /*proto*/


/* Implementation of _zephyr */

static char __pyx_k6[] = "\n    A per-transaction unique ID for zephyrs\n    ";
static char __pyx_k8[] = "\n    A zephyr message\n    ";

static PyObject *__pyx_n_os;
static PyObject *__pyx_n_pwd;
static PyObject *__pyx_n_time;
static PyObject *__pyx_n_select;
static PyObject *__pyx_n_ZUid;
static PyObject *__pyx_n_object;
static PyObject *__pyx_n___init__;
static PyObject *__pyx_n_ZNotice;
static PyObject *__pyx_n_getmessage;
static PyObject *__pyx_n_setmessage;
static PyObject *__pyx_n_message;
static PyObject *__pyx_n_send;

static PyObject *__pyx_k6p;
static PyObject *__pyx_k8p;

static PyObject *__pyx_f_7_zephyr___error(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr___error(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_errno = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"errno",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_errno)) return 0;
  Py_INCREF(__pyx_v_errno);
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  if (PyObject_Cmp(__pyx_v_errno, __pyx_1, &__pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_2 = __pyx_2 != 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (__pyx_2) {
    __pyx_2 = PyInt_AsLong(__pyx_v_errno); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    __pyx_1 = PyString_FromString(error_message(__pyx_2)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    Py_INCREF(__pyx_v_errno);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_errno);
    PyTuple_SET_ITEM(__pyx_3, 1, __pyx_1);
    __pyx_1 = 0;
    __pyx_1 = PyObject_CallObject(PyExc_IOError, __pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_1, 0, 0);
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.__error");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr__string_c2p(char *__pyx_v_string) {
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  __pyx_1 = (__pyx_v_string == NULL);
  if (__pyx_1) {
    Py_INCREF(Py_None);
    __pyx_r = Py_None;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyString_FromString(__pyx_v_string); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 14; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    __pyx_2 = 0;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("_zephyr._string_c2p");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static char *__pyx_f_7_zephyr__string_p2c(PyObject *__pyx_v_string) {
  char *__pyx_r;
  int __pyx_1;
  char *__pyx_2;
  Py_INCREF(__pyx_v_string);
  __pyx_1 = __pyx_v_string == Py_None;
  if (__pyx_1) {
    __pyx_r = NULL;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_2 = PyString_AsString(__pyx_v_string); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
    __pyx_r = __pyx_2;
    goto __pyx_L0;
  }
  __pyx_L2:;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("_zephyr._string_p2c");
  __pyx_L0:;
  Py_DECREF(__pyx_v_string);
  return __pyx_r;
}

static PyObject *__pyx_n_address;

static PyObject *__pyx_k10p;

static char __pyx_k10[] = "";

static PyObject *__pyx_f_7_zephyr_4ZUid___init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_zephyr_4ZUid___init__ = {"__init__", (PyCFunction)__pyx_f_7_zephyr_4ZUid___init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_f_7_zephyr_4ZUid___init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {"self",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_self)) return 0;
  Py_INCREF(__pyx_v_self);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":28 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_address, __pyx_k10p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":29 */
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_time, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 29; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_zephyr.ZUid.__init__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static void __pyx_f_7_zephyr__ZUid_c2p(ZUnique_Id_t *__pyx_v_uid,PyObject *__pyx_v_p_uid) {
  PyObject *__pyx_1 = 0;
  Py_INCREF(__pyx_v_p_uid);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":32 */
  __pyx_1 = PyString_FromString(inet_ntoa(__pyx_v_uid->zuid_addr)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_uid, __pyx_n_address, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":33 */
  __pyx_1 = PyFloat_FromDouble((__pyx_v_uid->tv.tv_sec + (__pyx_v_uid->tv.tv_usec / 100000.0))); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_uid, __pyx_n_time, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_WriteUnraisable("_zephyr._ZUid_c2p");
  __pyx_L0:;
  Py_DECREF(__pyx_v_p_uid);
}

static void __pyx_f_7_zephyr__ZUid_p2c(PyObject *__pyx_v_uid,ZUnique_Id_t *__pyx_v_c_uid) {
  PyObject *__pyx_1 = 0;
  char *__pyx_2;
  PyObject *__pyx_3 = 0;
  unsigned int __pyx_4;
  PyObject *__pyx_5 = 0;
  Py_INCREF(__pyx_v_uid);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":36 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_uid, __pyx_n_address); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
  __pyx_2 = PyString_AsString(__pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  inet_aton(__pyx_2,(&__pyx_v_c_uid->zuid_addr));

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":37 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_uid, __pyx_n_time); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_1);
  __pyx_1 = 0;
  __pyx_1 = PyObject_CallObject(((PyObject *)(&PyInt_Type)), __pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_4 = PyInt_AsUnsignedLongMask(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 37; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_uid->tv.tv_usec = __pyx_4;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":38 */
  __pyx_3 = PyObject_GetAttr(__pyx_v_uid, __pyx_n_time); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  __pyx_1 = PyLong_FromUnsignedLong(__pyx_v_c_uid->tv.tv_usec); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  __pyx_5 = PyNumber_Subtract(__pyx_3, __pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_3 = PyInt_FromLong(100000); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  __pyx_1 = PyNumber_Multiply(__pyx_5, __pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_5 = PyTuple_New(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_5, 0, __pyx_1);
  __pyx_1 = 0;
  __pyx_3 = PyObject_CallObject(((PyObject *)(&PyInt_Type)), __pyx_5); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  __pyx_4 = PyInt_AsUnsignedLongMask(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_c_uid->tv.tv_usec = __pyx_4;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("_zephyr._ZUid_p2c");
  __pyx_L0:;
  Py_DECREF(__pyx_v_uid);
}

static PyObject *__pyx_n_kind;
static PyObject *__pyx_n_cls;
static PyObject *__pyx_n_instance;
static PyObject *__pyx_n_personal;
static PyObject *__pyx_n_uid;
static PyObject *__pyx_n_port;
static PyObject *__pyx_n_auth;
static PyObject *__pyx_n_recipient;
static PyObject *__pyx_n_sender;
static PyObject *__pyx_n_opcode;
static PyObject *__pyx_n_format;
static PyObject *__pyx_n_other_fields;
static PyObject *__pyx_n_fields;
static PyObject *__pyx_n_iteritems;

static PyObject *__pyx_k13p;

static char __pyx_k13[] = "Class $class, Instance $instance:\nTo: @bold($recipient) at $time $date\nFrom: @bold{$1 <$sender>}\n\n$2";

static PyObject *__pyx_f_7_zephyr_7ZNotice___init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_zephyr_7ZNotice___init__ = {"__init__", (PyCFunction)__pyx_f_7_zephyr_7ZNotice___init__, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_f_7_zephyr_7ZNotice___init__(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_options = 0;
  PyObject *__pyx_v_k;
  PyObject *__pyx_v_v;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  static char *__pyx_argnames[] = {"self",0};
  if (__Pyx_GetStarArgs(&__pyx_args, &__pyx_kwds, __pyx_argnames, 1, 0, &__pyx_v_options, 0) < 0) return 0;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_self)) {
    Py_XDECREF(__pyx_args);
    Py_XDECREF(__pyx_kwds);
    Py_XDECREF(__pyx_v_options);
    return 0;
  }
  Py_INCREF(__pyx_v_self);
  __pyx_v_k = Py_None; Py_INCREF(Py_None);
  __pyx_v_v = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":46 */
  __pyx_1 = PyInt_FromLong(ACKED); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_kind, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 46; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":47 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_cls, __pyx_n_message) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":48 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_instance, __pyx_n_personal) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":50 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_ZUid); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_uid, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":51 */
  __pyx_1 = PyInt_FromLong(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 51; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_time, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 51; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":52 */
  __pyx_2 = PyInt_FromLong(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_port, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":53 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_auth, Py_True) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":54 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_recipient, Py_None) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 54; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":55 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_sender, Py_None) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":56 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_opcode, Py_None) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 56; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":57 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_format, __pyx_k13p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 57; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":58 */
  __pyx_1 = PyList_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_other_fields, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":59 */
  __pyx_2 = PyList_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 59; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_fields, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 59; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":61 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_options, __pyx_n_iteritems); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyObject_GetIter(__pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  for (;;) {
    __pyx_2 = PyIter_Next(__pyx_1);
    if (!__pyx_2) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
      break;
    }
    __pyx_3 = PyObject_GetIter(__pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_2 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
    Py_DECREF(__pyx_v_k);
    __pyx_v_k = __pyx_2;
    __pyx_2 = 0;
    __pyx_2 = __Pyx_UnpackItem(__pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
    Py_DECREF(__pyx_v_v);
    __pyx_v_v = __pyx_2;
    __pyx_2 = 0;
    if (__Pyx_EndUnpack(__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_4 = PyObject_SetAttr(__pyx_v_self,__pyx_v_k,__pyx_v_v); if (__pyx_4 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 62; goto __pyx_L1;}
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.ZNotice.__init__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_XDECREF(__pyx_v_options);
  Py_DECREF(__pyx_v_k);
  Py_DECREF(__pyx_v_v);
  Py_DECREF(__pyx_v_self);
  Py_XDECREF(__pyx_args);
  Py_XDECREF(__pyx_kwds);
  return __pyx_r;
}

static PyObject *__pyx_n_join;

static PyObject *__pyx_k14p;

static char __pyx_k14[] = "\0";

static PyObject *__pyx_f_7_zephyr_7ZNotice_getmessage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_zephyr_7ZNotice_getmessage = {"getmessage", (PyCFunction)__pyx_f_7_zephyr_7ZNotice_getmessage, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_f_7_zephyr_7ZNotice_getmessage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"self",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_self)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_1 = PyObject_GetAttr(__pyx_k14p, __pyx_n_join); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_fields); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_2);
  __pyx_2 = 0;
  __pyx_2 = PyObject_CallObject(__pyx_1, __pyx_3); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_r = __pyx_2;
  __pyx_2 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.ZNotice.getmessage");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_split;

static PyObject *__pyx_k15p;

static char __pyx_k15[] = "\0";

static PyObject *__pyx_f_7_zephyr_7ZNotice_setmessage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_zephyr_7ZNotice_setmessage = {"setmessage", (PyCFunction)__pyx_f_7_zephyr_7ZNotice_setmessage, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_f_7_zephyr_7ZNotice_setmessage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_newmsg = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"self","newmsg",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_self, &__pyx_v_newmsg)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_newmsg);
  __pyx_1 = PyObject_GetAttr(__pyx_v_newmsg, __pyx_n_split); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 68; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 68; goto __pyx_L1;}
  Py_INCREF(__pyx_k15p);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_k15p);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 68; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_fields, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 68; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.ZNotice.setmessage");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_newmsg);
  return __pyx_r;
}

static PyObject *__pyx_n___error;

static PyObject *__pyx_f_7_zephyr_7ZNotice_send(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_zephyr_7ZNotice_send = {"send", (PyCFunction)__pyx_f_7_zephyr_7ZNotice_send, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_f_7_zephyr_7ZNotice_send(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  ZNotice_t __pyx_v_notice;
  PyObject *__pyx_v_original_message;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"self",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_self)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_original_message = Py_None; Py_INCREF(Py_None);
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":74 */
  __pyx_f_7_zephyr__ZNotice_p2c(__pyx_v_self,(&__pyx_v_notice)); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 74; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":76 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_message); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; goto __pyx_L1;}
  Py_DECREF(__pyx_v_original_message);
  __pyx_v_original_message = __pyx_1;
  __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":78 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_auth); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
  __pyx_2 = PyObject_IsTrue(__pyx_1); if (__pyx_2 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (__pyx_2) {
    __pyx_1 = PyInt_FromLong(ZSendNotice((&__pyx_v_notice),ZAUTH)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
    Py_DECREF(__pyx_v_errno);
    __pyx_v_errno = __pyx_1;
    __pyx_1 = 0;
    goto __pyx_L2;
  }
  /*else*/ {
    __pyx_1 = PyInt_FromLong(ZSendNotice((&__pyx_v_notice),ZNOAUTH)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 81; goto __pyx_L1;}
    Py_DECREF(__pyx_v_errno);
    __pyx_v_errno = __pyx_1;
    __pyx_1 = 0;
  }
  __pyx_L2:;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":82 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 82; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 82; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_errno);
  __pyx_4 = PyObject_CallObject(__pyx_1, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 82; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":84 */
  __pyx_f_7_zephyr__ZNotice_c2p((&__pyx_v_notice),__pyx_v_self); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 84; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":86 */
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_message, __pyx_v_original_message) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 86; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":88 */
  ZFreeNotice((&__pyx_v_notice));

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("_zephyr.ZNotice.send");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_original_message);
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_range;
static PyObject *__pyx_n_append;
static PyObject *__pyx_n_decode;

static PyObject *__pyx_k16p;

static char __pyx_k16[] = "utf-8";

static void __pyx_f_7_zephyr__ZNotice_c2p(ZNotice_t *__pyx_v_notice,PyObject *__pyx_v_p_notice) {
  PyObject *__pyx_v_i;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  int __pyx_3;
  PyObject *__pyx_4 = 0;
  Py_ssize_t __pyx_5;
  PyObject *__pyx_6 = 0;
  Py_INCREF(__pyx_v_p_notice);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":91 */
  __pyx_1 = PyInt_FromLong(__pyx_v_notice->z_kind); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 91; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_kind, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 91; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":92 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_p_notice, __pyx_n_uid); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 92; goto __pyx_L1;}
  __pyx_f_7_zephyr__ZUid_c2p((&__pyx_v_notice->z_uid),__pyx_1);
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":93 */
  __pyx_1 = PyFloat_FromDouble((__pyx_v_notice->z_time.tv_sec + (__pyx_v_notice->z_time.tv_usec / 100000.0))); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_time, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 93; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":94 */
  __pyx_1 = PyInt_FromLong(__pyx_v_notice->z_port); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_1);
  __pyx_1 = 0;
  __pyx_1 = PyObject_CallObject(((PyObject *)(&PyInt_Type)), __pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_port, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 94; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":95 */
  __pyx_2 = PyInt_FromLong(__pyx_v_notice->z_auth); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 95; goto __pyx_L1;}
  __pyx_3 = PyObject_IsTrue(__pyx_2); if (__pyx_3 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 95; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_1 = PyInt_FromLong(__pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 95; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_auth, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 95; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":97 */
  __pyx_2 = __pyx_f_7_zephyr__string_c2p(__pyx_v_notice->z_class); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 97; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_cls, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 97; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":98 */
  __pyx_1 = __pyx_f_7_zephyr__string_c2p(__pyx_v_notice->z_class_inst); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 98; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_instance, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 98; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":99 */
  __pyx_2 = __pyx_f_7_zephyr__string_c2p(__pyx_v_notice->z_recipient); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 99; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_recipient, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 99; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":100 */
  __pyx_1 = __pyx_f_7_zephyr__string_c2p(__pyx_v_notice->z_sender); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_sender, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":101 */
  __pyx_2 = __pyx_f_7_zephyr__string_c2p(__pyx_v_notice->z_opcode); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_opcode, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":102 */
  __pyx_1 = __pyx_f_7_zephyr__string_c2p(__pyx_v_notice->z_default_format); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_format, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":103 */
  __pyx_2 = PyObject_CallObject(((PyObject *)(&PyList_Type)), 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 103; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_other_fields, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 103; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":104 */
  __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_range); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(__pyx_v_notice->z_num_other_fields); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_2);
  __pyx_2 = 0;
  __pyx_2 = PyObject_CallObject(__pyx_1, __pyx_4); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_1 = PyObject_GetIter(__pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  for (;;) {
    __pyx_4 = PyIter_Next(__pyx_1);
    if (!__pyx_4) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_4;
    __pyx_4 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_v_p_notice, __pyx_n_other_fields); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    __pyx_4 = PyObject_GetAttr(__pyx_2, __pyx_n_append); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    __pyx_5 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    __pyx_2 = PyString_FromString((__pyx_v_notice->z_other_fields[__pyx_5])); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_6, 0, __pyx_2);
    __pyx_2 = 0;
    __pyx_2 = PyObject_CallObject(__pyx_4, __pyx_6); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
  }
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":107 */
  __pyx_3 = (__pyx_v_notice->z_message == NULL);
  if (__pyx_3) {
    if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_message, Py_None) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 108; goto __pyx_L1;}
    goto __pyx_L4;
  }
  /*else*/ {
    __pyx_4 = PyString_FromStringAndSize(__pyx_v_notice->z_message,__pyx_v_notice->z_message_len); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    __pyx_6 = PyObject_GetAttr(__pyx_4, __pyx_n_decode); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    Py_INCREF(__pyx_k16p);
    PyTuple_SET_ITEM(__pyx_2, 0, __pyx_k16p);
    __pyx_1 = PyObject_CallObject(__pyx_6, __pyx_2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    if (PyObject_SetAttr(__pyx_v_p_notice, __pyx_n_message, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
  }
  __pyx_L4:;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("_zephyr._ZNotice_c2p");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_p_notice);
}

static PyObject *__pyx_n_encode;
static PyObject *__pyx_n_encoded_message;

static PyObject *__pyx_k17p;

static char __pyx_k17[] = "utf-8";

static void __pyx_f_7_zephyr__ZNotice_p2c(PyObject *__pyx_v_notice,ZNotice_t *__pyx_v_c_notice) {
  PyObject *__pyx_v_i;
  PyObject *__pyx_1 = 0;
  ZNotice_Kind_t __pyx_2;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  unsigned int __pyx_5;
  PyObject *__pyx_6 = 0;
  unsigned short __pyx_7;
  char *__pyx_8;
  Py_ssize_t __pyx_9;
  Py_INCREF(__pyx_v_notice);
  __pyx_v_i = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":113 */
  memset(__pyx_v_c_notice,0,(sizeof(ZNotice_t)));

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":115 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_kind); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
  __pyx_2 = ((ZNotice_Kind_t)PyInt_AsLong(__pyx_1)); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_notice->z_kind = __pyx_2;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":116 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_uid); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; goto __pyx_L1;}
  __pyx_f_7_zephyr__ZUid_p2c(__pyx_1,(&__pyx_v_c_notice->z_uid)); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":117 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_time); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 117; goto __pyx_L1;}
  __pyx_3 = PyInt_FromLong(0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 117; goto __pyx_L1;}
  if (PyObject_Cmp(__pyx_1, __pyx_3, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 117; goto __pyx_L1;}
  __pyx_4 = __pyx_4 != 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  if (__pyx_4) {

    /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":118 */
    __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_time); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_1);
    __pyx_1 = 0;
    __pyx_1 = PyObject_CallObject(((PyObject *)(&PyInt_Type)), __pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_5 = PyInt_AsUnsignedLongMask(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_v_c_notice->z_time.tv_sec = __pyx_5;

    /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":119 */
    __pyx_3 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_time); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    __pyx_1 = PyLong_FromUnsignedLong(__pyx_v_c_notice->z_time.tv_sec); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    __pyx_6 = PyNumber_Subtract(__pyx_3, __pyx_1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_3 = PyInt_FromLong(100000); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    __pyx_1 = PyNumber_Multiply(__pyx_6, __pyx_3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_6, 0, __pyx_1);
    __pyx_1 = 0;
    __pyx_3 = PyObject_CallObject(((PyObject *)(&PyInt_Type)), __pyx_6); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    __pyx_5 = PyInt_AsUnsignedLongMask(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_v_c_notice->z_time.tv_usec = __pyx_5;
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":120 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_port); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; goto __pyx_L1;}
  __pyx_6 = PyInt_FromLong(0); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; goto __pyx_L1;}
  if (PyObject_Cmp(__pyx_1, __pyx_6, &__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; goto __pyx_L1;}
  __pyx_4 = __pyx_4 != 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  if (__pyx_4) {
    __pyx_3 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_port); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 121; goto __pyx_L1;}
    __pyx_7 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 121; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_v_c_notice->z_port = __pyx_7;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":122 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_auth); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; goto __pyx_L1;}
  __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_6, 0, __pyx_1);
  __pyx_1 = 0;
  __pyx_3 = PyObject_CallObject(((PyObject *)(&PyInt_Type)), __pyx_6); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_4 = PyInt_AsLong(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_c_notice->z_auth = __pyx_4;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":124 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_cls); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 124; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 124; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_notice->z_class = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":125 */
  __pyx_6 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_instance); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 125; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_6); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 125; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_v_c_notice->z_class_inst = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":126 */
  __pyx_3 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_recipient); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_c_notice->z_recipient = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":127 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_sender); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 127; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 127; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_notice->z_sender = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":128 */
  __pyx_6 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_opcode); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 128; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_6); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 128; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_v_c_notice->z_opcode = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":129 */
  __pyx_3 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_format); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 129; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_3); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 129; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_v_c_notice->z_default_format = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":130 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_other_fields); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 130; goto __pyx_L1;}
  __pyx_9 = PyObject_Length(__pyx_1); if (__pyx_9 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 130; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_notice->z_num_other_fields = __pyx_9;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":131 */
  __pyx_6 = __Pyx_GetName(__pyx_b, __pyx_n_range); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; goto __pyx_L1;}
  __pyx_3 = PyInt_FromLong(__pyx_v_c_notice->z_num_other_fields); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; goto __pyx_L1;}
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_3);
  __pyx_3 = 0;
  __pyx_3 = PyObject_CallObject(__pyx_6, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_6 = PyObject_GetIter(__pyx_3); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  for (;;) {
    __pyx_1 = PyIter_Next(__pyx_6);
    if (!__pyx_1) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_i);
    __pyx_v_i = __pyx_1;
    __pyx_1 = 0;
    __pyx_3 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_other_fields); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
    __pyx_1 = PyObject_GetItem(__pyx_3, __pyx_v_i); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_9 = PyInt_AsSsize_t(__pyx_v_i); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; goto __pyx_L1;}
    (__pyx_v_c_notice->z_other_fields[__pyx_9]) = __pyx_8;
  }
  Py_DECREF(__pyx_6); __pyx_6 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":134 */
  __pyx_3 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_message); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 134; goto __pyx_L1;}
  __pyx_1 = PyObject_GetAttr(__pyx_3, __pyx_n_encode); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 134; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_6 = PyTuple_New(1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 134; goto __pyx_L1;}
  Py_INCREF(__pyx_k17p);
  PyTuple_SET_ITEM(__pyx_6, 0, __pyx_k17p);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_6); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 134; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  if (PyObject_SetAttr(__pyx_v_notice, __pyx_n_encoded_message, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 134; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":136 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_encoded_message); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; goto __pyx_L1;}
  __pyx_8 = __pyx_f_7_zephyr__string_p2c(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_v_c_notice->z_message = __pyx_8;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":137 */
  __pyx_6 = PyObject_GetAttr(__pyx_v_notice, __pyx_n_encoded_message); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 137; goto __pyx_L1;}
  __pyx_9 = PyObject_Length(__pyx_6); if (__pyx_9 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 137; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  __pyx_v_c_notice->z_message_len = __pyx_9;

  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("_zephyr._ZNotice_p2c");
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_notice);
}

static PyObject *__pyx_f_7_zephyr_initialize(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_initialize(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":140 */
  __pyx_1 = PyInt_FromLong(ZInitialize()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 140; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_1;
  __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":141 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 141; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 141; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_errno);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 141; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.initialize");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_openPort(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_openPort(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  unsigned short __pyx_v_port;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":146 */
  __pyx_v_port = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":148 */
  __pyx_1 = PyInt_FromLong(ZOpenPort((&__pyx_v_port))); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 148; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_1;
  __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":149 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 149; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 149; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_errno);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 149; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":151 */
  __pyx_1 = PyInt_FromLong(__pyx_v_port); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 151; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.openPort");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_getFD(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_getFD(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_1 = PyInt_FromLong(ZGetFD()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 154; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_zephyr.getFD");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_setFD(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_setFD(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_fd = 0;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"fd",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_fd)) return 0;
  Py_INCREF(__pyx_v_fd);
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":157 */
  __pyx_1 = PyInt_AsLong(__pyx_v_fd); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 157; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(ZSetFD(__pyx_1)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 157; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_2;
  __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":158 */
  __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 158; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 158; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_errno);
  __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 158; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("_zephyr.setFD");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_fd);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_sub(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_sub(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_cls = 0;
  PyObject *__pyx_v_instance = 0;
  PyObject *__pyx_v_recipient = 0;
  ZSubscription_t __pyx_v_newsub[1];
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  char *__pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"cls","instance","recipient",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOO", __pyx_argnames, &__pyx_v_cls, &__pyx_v_instance, &__pyx_v_recipient)) return 0;
  Py_INCREF(__pyx_v_cls);
  Py_INCREF(__pyx_v_instance);
  Py_INCREF(__pyx_v_recipient);
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":163 */
  __pyx_1 = PyString_AsString(__pyx_v_cls); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 163; goto __pyx_L1;}
  (__pyx_v_newsub[0]).zsub_class = __pyx_1;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":164 */
  __pyx_1 = PyString_AsString(__pyx_v_instance); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; goto __pyx_L1;}
  (__pyx_v_newsub[0]).zsub_classinst = __pyx_1;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":165 */
  __pyx_1 = PyString_AsString(__pyx_v_recipient); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; goto __pyx_L1;}
  (__pyx_v_newsub[0]).zsub_recipient = __pyx_1;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":167 */
  __pyx_2 = PyInt_FromLong(ZSubscribeTo(__pyx_v_newsub,1,0)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_2;
  __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":168 */
  __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_errno);
  __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 168; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("_zephyr.sub");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_cls);
  Py_DECREF(__pyx_v_instance);
  Py_DECREF(__pyx_v_recipient);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_unsub(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_unsub(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_cls = 0;
  PyObject *__pyx_v_instance = 0;
  PyObject *__pyx_v_recipient = 0;
  ZSubscription_t __pyx_v_delsub[1];
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  char *__pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"cls","instance","recipient",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOO", __pyx_argnames, &__pyx_v_cls, &__pyx_v_instance, &__pyx_v_recipient)) return 0;
  Py_INCREF(__pyx_v_cls);
  Py_INCREF(__pyx_v_instance);
  Py_INCREF(__pyx_v_recipient);
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":173 */
  __pyx_1 = PyString_AsString(__pyx_v_cls); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 173; goto __pyx_L1;}
  (__pyx_v_delsub[0]).zsub_class = __pyx_1;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":174 */
  __pyx_1 = PyString_AsString(__pyx_v_instance); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; goto __pyx_L1;}
  (__pyx_v_delsub[0]).zsub_classinst = __pyx_1;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":175 */
  __pyx_1 = PyString_AsString(__pyx_v_recipient); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 175; goto __pyx_L1;}
  (__pyx_v_delsub[0]).zsub_recipient = __pyx_1;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":177 */
  __pyx_2 = PyInt_FromLong(ZUnsubscribeTo(__pyx_v_delsub,1,0)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 177; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_2;
  __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":178 */
  __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_errno);
  __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 178; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("_zephyr.unsub");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_cls);
  Py_DECREF(__pyx_v_instance);
  Py_DECREF(__pyx_v_recipient);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_cancelSubs(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_cancelSubs(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_errno;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":181 */
  __pyx_1 = PyInt_FromLong(ZCancelSubscriptions(0)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 181; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_1;
  __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":182 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_errno);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("_zephyr.cancelSubs");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  return __pyx_r;
}

static PyObject *__pyx_n_getFD;

static PyObject *__pyx_f_7_zephyr_receive(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_receive(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_block = 0;
  ZNotice_t __pyx_v_notice;
  struct sockaddr_in __pyx_v_sender;
  PyObject *__pyx_v_errno;
  PyObject *__pyx_v_p_notice;
  PyObject *__pyx_r;
  int __pyx_1;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  PyObject *__pyx_7 = 0;
  static char *__pyx_argnames[] = {"block",0};
  __pyx_v_block = __pyx_k9;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "|O", __pyx_argnames, &__pyx_v_block)) return 0;
  Py_INCREF(__pyx_v_block);
  __pyx_v_errno = Py_None; Py_INCREF(Py_None);
  __pyx_v_p_notice = Py_None; Py_INCREF(Py_None);

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":188 */
  while (1) {
    __pyx_1 = (ZPending() == 0);
    if (!__pyx_1) break;

    /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":189 */
    __pyx_1 = PyObject_IsTrue(__pyx_v_block); if (__pyx_1 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 189; goto __pyx_L1;}
    __pyx_2 = (!__pyx_1);
    if (__pyx_2) {
      Py_INCREF(Py_None);
      __pyx_r = Py_None;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":191 */
    __pyx_3 = __Pyx_GetName(__pyx_m, __pyx_n_select); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    __pyx_4 = PyObject_GetAttr(__pyx_3, __pyx_n_select); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_3 = __Pyx_GetName(__pyx_m, __pyx_n_getFD); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    __pyx_5 = PyObject_CallObject(__pyx_3, 0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __pyx_3 = PyList_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    PyList_SET_ITEM(__pyx_3, 0, __pyx_5);
    __pyx_5 = 0;
    __pyx_5 = PyList_New(0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    __pyx_6 = PyList_New(0); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    __pyx_7 = PyTuple_New(3); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_7, 0, __pyx_3);
    PyTuple_SET_ITEM(__pyx_7, 1, __pyx_5);
    PyTuple_SET_ITEM(__pyx_7, 2, __pyx_6);
    __pyx_3 = 0;
    __pyx_5 = 0;
    __pyx_6 = 0;
    __pyx_3 = PyObject_CallObject(__pyx_4, __pyx_7); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 191; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_7); __pyx_7 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
  }

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":193 */
  __pyx_5 = PyInt_FromLong(ZReceiveNotice((&__pyx_v_notice),(&__pyx_v_sender))); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 193; goto __pyx_L1;}
  Py_DECREF(__pyx_v_errno);
  __pyx_v_errno = __pyx_5;
  __pyx_5 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":194 */
  __pyx_6 = __Pyx_GetName(__pyx_m, __pyx_n___error); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 194; goto __pyx_L1;}
  __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 194; goto __pyx_L1;}
  Py_INCREF(__pyx_v_errno);
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_errno);
  __pyx_7 = PyObject_CallObject(__pyx_6, __pyx_4); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 194; goto __pyx_L1;}
  Py_DECREF(__pyx_6); __pyx_6 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  Py_DECREF(__pyx_7); __pyx_7 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":196 */
  __pyx_1 = (ZCheckAuthentication((&__pyx_v_notice),(&__pyx_v_sender)) == ZAUTH_YES);
  if (__pyx_1) {
    __pyx_v_notice.z_auth = 1;
    goto __pyx_L5;
  }
  /*else*/ {
    __pyx_v_notice.z_auth = 0;
  }
  __pyx_L5:;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":201 */
  __pyx_3 = __Pyx_GetName(__pyx_m, __pyx_n_ZNotice); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 201; goto __pyx_L1;}
  __pyx_5 = PyObject_CallObject(__pyx_3, 0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 201; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_v_p_notice);
  __pyx_v_p_notice = __pyx_5;
  __pyx_5 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":202 */
  __pyx_f_7_zephyr__ZNotice_c2p((&__pyx_v_notice),__pyx_v_p_notice); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 202; goto __pyx_L1;}

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":203 */
  Py_INCREF(__pyx_v_p_notice);
  __pyx_r = __pyx_v_p_notice;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_7);
  __Pyx_AddTraceback("_zephyr.receive");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_errno);
  Py_DECREF(__pyx_v_p_notice);
  Py_DECREF(__pyx_v_block);
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_sender(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_sender(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_1 = PyString_FromString(ZGetSender()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 206; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_zephyr.sender");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_7_zephyr_realm(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_7_zephyr_realm(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  __pyx_1 = PyString_FromString(ZGetRealm()); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 209; goto __pyx_L1;}
  __pyx_r = __pyx_1;
  __pyx_1 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("_zephyr.realm");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_ZNotice, "ZNotice"},
  {&__pyx_n_ZUid, "ZUid"},
  {&__pyx_n___error, "__error"},
  {&__pyx_n___init__, "__init__"},
  {&__pyx_n_address, "address"},
  {&__pyx_n_append, "append"},
  {&__pyx_n_auth, "auth"},
  {&__pyx_n_cls, "cls"},
  {&__pyx_n_decode, "decode"},
  {&__pyx_n_encode, "encode"},
  {&__pyx_n_encoded_message, "encoded_message"},
  {&__pyx_n_fields, "fields"},
  {&__pyx_n_format, "format"},
  {&__pyx_n_getFD, "getFD"},
  {&__pyx_n_getmessage, "getmessage"},
  {&__pyx_n_instance, "instance"},
  {&__pyx_n_iteritems, "iteritems"},
  {&__pyx_n_join, "join"},
  {&__pyx_n_kind, "kind"},
  {&__pyx_n_message, "message"},
  {&__pyx_n_object, "object"},
  {&__pyx_n_opcode, "opcode"},
  {&__pyx_n_os, "os"},
  {&__pyx_n_other_fields, "other_fields"},
  {&__pyx_n_personal, "personal"},
  {&__pyx_n_port, "port"},
  {&__pyx_n_pwd, "pwd"},
  {&__pyx_n_range, "range"},
  {&__pyx_n_recipient, "recipient"},
  {&__pyx_n_select, "select"},
  {&__pyx_n_send, "send"},
  {&__pyx_n_sender, "sender"},
  {&__pyx_n_setmessage, "setmessage"},
  {&__pyx_n_split, "split"},
  {&__pyx_n_time, "time"},
  {&__pyx_n_uid, "uid"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k6p, __pyx_k6, sizeof(__pyx_k6)},
  {&__pyx_k8p, __pyx_k8, sizeof(__pyx_k8)},
  {&__pyx_k10p, __pyx_k10, sizeof(__pyx_k10)},
  {&__pyx_k13p, __pyx_k13, sizeof(__pyx_k13)},
  {&__pyx_k14p, __pyx_k14, sizeof(__pyx_k14)},
  {&__pyx_k15p, __pyx_k15, sizeof(__pyx_k15)},
  {&__pyx_k16p, __pyx_k16, sizeof(__pyx_k16)},
  {&__pyx_k17p, __pyx_k17, sizeof(__pyx_k17)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"__error", (PyCFunction)__pyx_f_7_zephyr___error, METH_VARARGS|METH_KEYWORDS, 0},
  {"initialize", (PyCFunction)__pyx_f_7_zephyr_initialize, METH_VARARGS|METH_KEYWORDS, 0},
  {"openPort", (PyCFunction)__pyx_f_7_zephyr_openPort, METH_VARARGS|METH_KEYWORDS, 0},
  {"getFD", (PyCFunction)__pyx_f_7_zephyr_getFD, METH_VARARGS|METH_KEYWORDS, 0},
  {"setFD", (PyCFunction)__pyx_f_7_zephyr_setFD, METH_VARARGS|METH_KEYWORDS, 0},
  {"sub", (PyCFunction)__pyx_f_7_zephyr_sub, METH_VARARGS|METH_KEYWORDS, 0},
  {"unsub", (PyCFunction)__pyx_f_7_zephyr_unsub, METH_VARARGS|METH_KEYWORDS, 0},
  {"cancelSubs", (PyCFunction)__pyx_f_7_zephyr_cancelSubs, METH_VARARGS|METH_KEYWORDS, 0},
  {"receive", (PyCFunction)__pyx_f_7_zephyr_receive, METH_VARARGS|METH_KEYWORDS, 0},
  {"sender", (PyCFunction)__pyx_f_7_zephyr_sender, METH_VARARGS|METH_KEYWORDS, 0},
  {"realm", (PyCFunction)__pyx_f_7_zephyr_realm, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC init_zephyr(void); /*proto*/
PyMODINIT_FUNC init_zephyr(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("_zephyr", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":1 */
  __pyx_1 = __Pyx_Import(__pyx_n_os, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_os, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":2 */
  __pyx_1 = __Pyx_Import(__pyx_n_pwd, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_pwd, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":3 */
  __pyx_1 = __Pyx_Import(__pyx_n_time, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_time, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":4 */
  __pyx_1 = __Pyx_Import(__pyx_n_select, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_select, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":22 */
  __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_object); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_2);
  __pyx_2 = 0;
  if (PyDict_SetItemString(__pyx_1, "__doc__", __pyx_k6p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  __pyx_2 = __Pyx_CreateClass(__pyx_3, __pyx_1, __pyx_n_ZUid, "_zephyr"); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_3 = PyCFunction_New(&__pyx_mdef_7_zephyr_4ZUid___init__, 0); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 27; goto __pyx_L1;}
  __pyx_4 = PyMethod_New(__pyx_3, 0, __pyx_2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 27; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  if (PyObject_SetAttr(__pyx_2, __pyx_n___init__, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 27; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (PyObject_SetAttr(__pyx_m, __pyx_n_ZUid, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":40 */
  __pyx_3 = PyDict_New(); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  __pyx_4 = __Pyx_GetName(__pyx_b, __pyx_n_object); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_4);
  __pyx_4 = 0;
  if (PyDict_SetItemString(__pyx_3, "__doc__", __pyx_k8p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  __pyx_1 = __Pyx_CreateClass(__pyx_2, __pyx_3, __pyx_n_ZNotice, "_zephyr"); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":45 */
  __pyx_4 = PyCFunction_New(&__pyx_mdef_7_zephyr_7ZNotice___init__, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 45; goto __pyx_L1;}
  __pyx_2 = PyMethod_New(__pyx_4, 0, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 45; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (PyObject_SetAttr(__pyx_1, __pyx_n___init__, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 45; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":64 */
  __pyx_4 = PyCFunction_New(&__pyx_mdef_7_zephyr_7ZNotice_getmessage, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
  __pyx_2 = PyMethod_New(__pyx_4, 0, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (PyObject_SetAttr(__pyx_1, __pyx_n_getmessage, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":67 */
  __pyx_4 = PyCFunction_New(&__pyx_mdef_7_zephyr_7ZNotice_setmessage, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 67; goto __pyx_L1;}
  __pyx_2 = PyMethod_New(__pyx_4, 0, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 67; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (PyObject_SetAttr(__pyx_1, __pyx_n_setmessage, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 67; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":70 */
  __pyx_4 = __Pyx_GetName(__pyx_1, __pyx_n_getmessage); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
  __pyx_2 = __Pyx_GetName(__pyx_1, __pyx_n_setmessage); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
  __pyx_5 = PyTuple_New(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_5, 0, __pyx_4);
  PyTuple_SET_ITEM(__pyx_5, 1, __pyx_2);
  __pyx_4 = 0;
  __pyx_2 = 0;
  __pyx_4 = PyObject_CallObject(((PyObject *)(&PyProperty_Type)), __pyx_5); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  if (PyObject_SetAttr(__pyx_1, __pyx_n_message, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":72 */
  __pyx_2 = PyCFunction_New(&__pyx_mdef_7_zephyr_7ZNotice_send, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
  __pyx_5 = PyMethod_New(__pyx_2, 0, __pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (PyObject_SetAttr(__pyx_1, __pyx_n_send, __pyx_5) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  if (PyObject_SetAttr(__pyx_m, __pyx_n_ZNotice, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 40; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":184 */
  Py_INCREF(Py_False);
  __pyx_k9 = Py_False;

  /* "/afs/athena.mit.edu/user/c/m/cmerrill/bot/python-zephyr/_zephyr.pyx":208 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("_zephyr");
}

static char *__pyx_filenames[] = {
  "_zephyr.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
    PyObject *__import__ = 0;
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    __import__ = PyObject_GetAttrString(__pyx_b, "__import__");
    if (!__import__)
        goto bad;
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    module = PyObject_CallFunction(__import__, "OOOO",
        name, global_dict, empty_dict, list);
bad:
    Py_XDECREF(empty_list);
    Py_XDECREF(__import__);
    Py_XDECREF(empty_dict);
    return module;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static PyObject *__Pyx_CreateClass(
    PyObject *bases, PyObject *dict, PyObject *name, char *modname)
{
    PyObject *py_modname;
    PyObject *result = 0;
    
    py_modname = PyString_FromString(modname);
    if (!py_modname)
        goto bad;
    if (PyDict_SetItemString(dict, "__module__", py_modname) < 0)
        goto bad;
    result = PyClass_New(bases, dict, name);
bad:
    Py_XDECREF(py_modname);
    return result;
}

static int __Pyx_GetStarArgs(
    PyObject **args, 
    PyObject **kwds,
    char *kwd_list[], 
    Py_ssize_t nargs,
    PyObject **args2, 
    PyObject **kwds2,
    char rqd_kwds[])
{
    PyObject *x = 0, *args1 = 0, *kwds1 = 0;
    int i;
    char **p;
    
    if (args2)
        *args2 = 0;
    if (kwds2)
        *kwds2 = 0;
    
    if (args2) {
        args1 = PyTuple_GetSlice(*args, 0, nargs);
        if (!args1)
            goto bad;
        *args2 = PyTuple_GetSlice(*args, nargs, PyTuple_GET_SIZE(*args));
        if (!*args2)
            goto bad;
    }
    else if (PyTuple_GET_SIZE(*args) > nargs) {
        int m = nargs;
        int n = PyTuple_GET_SIZE(*args);
        PyErr_Format(PyExc_TypeError,
            "function takes at most %d positional arguments (%d given)",
                m, n);
        goto bad;
    }
    else {
        args1 = *args;
        Py_INCREF(args1);
    }
    
    if (rqd_kwds && !*kwds)
            for (i = 0, p = kwd_list; *p; i++, p++)
                if (rqd_kwds[i])
                    goto missing_kwarg;
    
    if (kwds2) {
        if (*kwds) {
            kwds1 = PyDict_New();
            if (!kwds1)
                goto bad;
            *kwds2 = PyDict_Copy(*kwds);
            if (!*kwds2)
                goto bad;
            for (i = 0, p = kwd_list; *p; i++, p++) {
                x = PyDict_GetItemString(*kwds, *p);
                if (x) {
                    if (PyDict_SetItemString(kwds1, *p, x) < 0)
                        goto bad;
                    if (PyDict_DelItemString(*kwds2, *p) < 0)
                        goto bad;
                }
                else if (rqd_kwds && rqd_kwds[i])
                    goto missing_kwarg;
            }
        }
        else {
            *kwds2 = PyDict_New();
            if (!*kwds2)
                goto bad;
        }
    }
    else {
        kwds1 = *kwds;
        Py_XINCREF(kwds1);
        if (rqd_kwds && *kwds)
            for (i = 0, p = kwd_list; *p; i++, p++)
                if (rqd_kwds[i] && !PyDict_GetItemString(*kwds, *p))
                        goto missing_kwarg;
    }
    
    *args = args1;
    *kwds = kwds1;
    return 0;
missing_kwarg:
    PyErr_Format(PyExc_TypeError,
        "required keyword argument '%s' is missing", *p);
bad:
    Py_XDECREF(args1);
    Py_XDECREF(kwds1);
    if (args2) {
        Py_XDECREF(*args2);
    }
    if (kwds2) {
        Py_XDECREF(*kwds2);
    }
    return -1;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
    Py_XINCREF(type);
    Py_XINCREF(value);
    Py_XINCREF(tb);
    /* First, check the traceback argument, replacing None with NULL. */
    if (tb == Py_None) {
        Py_DECREF(tb);
        tb = 0;
    }
    else if (tb != NULL && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }
    /* Next, replace a missing value with None */
    if (value == NULL) {
        value = Py_None;
        Py_INCREF(value);
    }
    #if PY_VERSION_HEX < 0x02050000
    if (!PyClass_Check(type))
    #else
    if (!PyType_Check(type))
    #endif
    {
        /* Raising an instance.  The value should be a dummy. */
        if (value != Py_None) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto raise_error;
        }
        /* Normalize to raise <class>, <instance> */
        Py_DECREF(value);
        value = type;
        #if PY_VERSION_HEX < 0x02050000
            if (PyInstance_Check(type)) {
                type = (PyObject*) ((PyInstanceObject*)type)->in_class;
                Py_INCREF(type);
            }
            else {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception must be an old-style class or instance");
                goto raise_error;
            }
        #else
            type = (PyObject*) type->ob_type;
            Py_INCREF(type);
            if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
                PyErr_SetString(PyExc_TypeError,
                    "raise: exception class must be a subclass of BaseException");
                goto raise_error;
            }
        #endif
    }
    PyErr_Restore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}

static void __Pyx_WriteUnraisable(char *name) {
    PyObject *old_exc, *old_val, *old_tb;
    PyObject *ctx;
    PyErr_Fetch(&old_exc, &old_val, &old_tb);
    ctx = PyString_FromString(name);
    PyErr_Restore(old_exc, old_val, old_tb);
    if (!ctx)
        ctx = Py_None;
    PyErr_WriteUnraisable(ctx);
}

static void __Pyx_UnpackError(void) {
    PyErr_SetString(PyExc_ValueError, "unpack sequence of wrong size");
}

static PyObject *__Pyx_UnpackItem(PyObject *iter) {
    PyObject *item;
    if (!(item = PyIter_Next(iter))) {
        if (!PyErr_Occurred())
            __Pyx_UnpackError();
    }
    return item;
}

static int __Pyx_EndUnpack(PyObject *iter) {
    PyObject *item;
    if ((item = PyIter_Next(iter))) {
        Py_DECREF(item);
        __Pyx_UnpackError();
        return -1;
    }
    else if (!PyErr_Occurred())
        return 0;
    else
        return -1;
}

static PyObject *__Pyx_GetItemInt(PyObject *o, Py_ssize_t i) {
    PyTypeObject *t = o->ob_type;
    PyObject *r;
    if (t->tp_as_sequence && t->tp_as_sequence->sq_item)
        r = PySequence_GetItem(o, i);
    else {
        PyObject *j = PyInt_FromLong(i);
        if (!j)
            return 0;
        r = PyObject_GetItem(o, j);
        Py_DECREF(j);
    }
    return r;
}

static int __Pyx_SetItemInt(PyObject *o, Py_ssize_t i, PyObject *v) {
    PyTypeObject *t = o->ob_type;
    int r;
    if (t->tp_as_sequence && t->tp_as_sequence->sq_item)
        r = PySequence_SetItem(o, i, v);
    else {
        PyObject *j = PyInt_FromLong(i);
        if (!j)
            return -1;
        r = PyObject_SetItem(o, j, v);
        Py_DECREF(j);
    }
    return r;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
