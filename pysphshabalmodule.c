#include <stdio.h>
#include <Python.h>
#include "sphlib-3.0-c/sph_shabal.h"


static PyObject* shabal192(PyObject *self, PyObject *args) {
    const char *params;

    if (!PyArg_ParseTuple(args, "s", &params))
        return NULL;

    sph_shabal_context ctx;
    sph_shabal192_init(&ctx);
    sph_shabal192(&ctx, (const unsigned char*)params, (int)strlen(params));
    char ctx_cache[24];
    sph_shabal192_close(&ctx, ctx_cache);

    return PyBytes_FromStringAndSize(ctx_cache, (Py_ssize_t)24);
}

static PyObject* shabal224(PyObject *self, PyObject *args) {
    const char *params;

    if (!PyArg_ParseTuple(args, "s", &params))
        return NULL;

    sph_shabal_context ctx;
    sph_shabal224_init(&ctx);
    sph_shabal224(&ctx, (const unsigned char*)params, (int)strlen(params));
    char ctx_cache[28];
    sph_shabal224_close(&ctx, ctx_cache);

    return PyBytes_FromStringAndSize(ctx_cache, (Py_ssize_t)28);
}

static PyObject* shabal256(PyObject *self, PyObject *args) {
    const char *params;

    if (!PyArg_ParseTuple(args, "s", &params))
        return NULL;

    sph_shabal_context ctx;
    sph_shabal256_init(&ctx);
    sph_shabal256(&ctx, (const unsigned char*)params, (int)strlen(params));
    char ctx_cache[32];
    sph_shabal256_close(&ctx, ctx_cache);

    return PyBytes_FromStringAndSize(ctx_cache, (Py_ssize_t)32);
}


static PyObject* shabal384(PyObject *self, PyObject *args) {
    const char *params;

    if (!PyArg_ParseTuple(args, "s", &params))
        return NULL;

    sph_shabal_context ctx;
    sph_shabal384_init(&ctx);
    sph_shabal384(&ctx, (const unsigned char*)params, (int)strlen(params));
    char ctx_cache[48];
    sph_shabal384_close(&ctx, ctx_cache);

    return PyBytes_FromStringAndSize(ctx_cache, (Py_ssize_t)48);
}


static PyObject* shabal512(PyObject *self, PyObject *args) {
    const char *params;

    if (!PyArg_ParseTuple(args, "s", &params))
        return NULL;

    sph_shabal_context ctx;
    sph_shabal512_init(&ctx);
    sph_shabal512(&ctx, (const unsigned char*)params, (int)strlen(params));
    char ctx_cache[64];
    sph_shabal512_close(&ctx, ctx_cache);

    return PyBytes_FromStringAndSize(ctx_cache, (Py_ssize_t)64);
}


static PyMethodDef py_sph_shabal_methods[] = {
    {
        "shabal192", shabal192, METH_VARARGS,
        "Result of shabal hash function on a 192 bits output. Example: shabal192(\"string\").hex()"
    },{
        "shabal224", shabal224, METH_VARARGS,
        "Result of shabal hash function on a 224 bits output. Example: shabal224(\"string\").hex()"
    },{
        "shabal256", shabal256, METH_VARARGS,
        "Result of shabal hash function on a 256 bits output. Example: shabal256(\"string\").hex()"
    },{
        "shabal384", shabal384, METH_VARARGS,
        "Result of shabal hash function on a 384 bits output. Example: shabal384(\"string\").hex()"
    },{
        "shabal512", shabal512, METH_VARARGS,
        "Result of shabal hash function on a 512 bits output. Example: shabal512(\"string\").hex()"
    },
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef shabal_definition = {
    PyModuleDef_HEAD_INIT,
    "py_sph_shabal",
    "Sphlib 3.0 bindings for Python",
    -1,
    py_sph_shabal_methods
};


PyMODINIT_FUNC PyInit_py_sph_shabal(void) {
    Py_Initialize();
    return PyModule_Create(&shabal_definition);
}
