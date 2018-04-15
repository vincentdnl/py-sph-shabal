from distutils.core import setup, Extension

shabal_module = Extension(
    'py_sph_shabal',
    sources=[
        'pysphshabalmodule.c',
        'sphlib-3.0-c/shabal.c'
    ]
)

setup(
    name='py_sph_shabal',
    version='0.1.0',
    description='Sphlib 3.0 bindings for Python',
    ext_modules=[shabal_module],
)
