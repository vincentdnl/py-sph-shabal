from py_sph_shabal import shabal256


def test_shabal256_len_0():
    assert shabal256("").hex() == "aec750d11feee9f16271922fbaf5a9be142f62019ef8d720f858940070889014"
