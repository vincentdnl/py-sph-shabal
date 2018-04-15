#include <stdio.h>
#include <Python.h>
#include "sphlib-3.0-c/sph_shabal.h"


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


static PyMethodDef py_sph_shabal_methods[] = {
    {
        "shabal256", shabal256, METH_VARARGS,
        "Result of shabal hash function on a 256 bits output. Example: shabal256(\"Hello\").hex()"
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
