from distutils.core import setup, Extension

with open("README.md", "r") as fh:
    long_description = fh.read()

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
    long_description=long_description,
    long_description_content_type="text/markdown",
    ext_modules=[shabal_module],
)
