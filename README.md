# py_sph_shabal

Sphlib 3.0 bindings for Python

**examples:**

```python
from py_sph_shabal import shabal192, shabal224, shabal256, shabal384, shabal512

shabal192("Hello!").hex()  # 7ca45359b11df111fd65cc581d4b7e79b4785317d1ef4913
shabal224("Hello!").hex()  # 9718c690eba617ba7b600b11da593f067e84971728fdbfd15484c057
shabal256("Hello!").hex()  # 609c6c167a761f312ab12ffff0eee7b739e4dd762a6cd523d3f79636193533dd
shabal384("Hello!").hex()  # 83bec3ff06722571b7bed8844476774b51f8038cba0f749b8b759a36ae32da77de59bd066248323aeb28f0c9c4325fda
shabal512("Hello!").hex()  # 4dc5b0c34f1d8773dcf6bd9dbd0d2759ed243f671cf46c501cfed800ea382803fb45254653329f9a4dba12c01fea919c8c7f88e70b33ab0f163c126d2c9eaf23
```
