#include <Python.h>

static PyObject* method_selam(PyObject* self, PyObject* args){
    printf("Selam Ben Ümit ŞEN, umt_selam Fonksiyonu C Katmanında Başarılı Şekilde Çalıştı. :)))\n");
    Py_RETURN_NONE;
}

static PyMethodDef UmitMethods[] = {
    {"umt_selam",method_selam,METH_VARARGS, "C dili özel selam."},
    {NULL,NULL,0,NULL}
};

static struct PyModuleDef umit_core_module = {
    PyModuleDef_HEAD_INIT,
    "umit_core",
    NULL,
    -1,
    UmitMethods
};

PyMODINIT_FUNC PyInit_umit_core(void){
    return PyModule_Create(&umit_core_module);
}
