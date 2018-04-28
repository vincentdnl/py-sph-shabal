from py_sph_shabal import shabal192, shabal224, shabal256, shabal384, shabal512


def test_shabal192_len_0():
    assert shabal192("").hex() == "e10dc32232f98b039dbbcfa41269b9cdf67a73c841214c81"


def test_shabal224_len_0():
    assert shabal224("").hex() == "562b4fdbe1706247552927f814b66a3d74b465a090af23e277bf8029"


def test_shabal256_len_0():
    assert shabal256("").hex() == "aec750d11feee9f16271922fbaf5a9be142f62019ef8d720f858940070889014"


def test_shabal384_len_0():
    assert shabal384("").hex() == "ff093d67d22b06a674b5f384719150d617e0ff9c8923569a2ab60cda886df63c91a25f33cd71cc22c9eebc5cd6aee52a"


def test_shabal512_len_0():
    assert shabal512("").hex() == "fc2d5dff5d70b7f6b1f8c2fcc8c1f9fe9934e54257eded0cf2b539a2ef0a19ccffa84f8d9fa135e4bd3c09f590f3a927ebd603ac29eb729e6f2a9af031ad8dc6"
