#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator {
    IL2CPP_REGISTER_METHOD(0x02285A80, void, ctor_1, (app::X509CertificateCollection_X509CertificateEnumerator * this_ptr, app::X509CertificateCollection * mappings))
    IL2CPP_REGISTER_METHOD(0x02285B20, app::X509Certificate *, get_Current_1, (app::X509CertificateCollection_X509CertificateEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02285C10, app::Object *, IEnumerator_get_Current_1, (app::X509CertificateCollection_X509CertificateEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02285CA0, bool, IEnumerator_MoveNext_1, (app::X509CertificateCollection_X509CertificateEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02285D30, void, IEnumerator_Reset_1, (app::X509CertificateCollection_X509CertificateEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02285DC0, bool, MoveNext_1, (app::X509CertificateCollection_X509CertificateEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0293FD00, void, ctor_2, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr, app::X509CertificateCollection_2 * mappings))
    IL2CPP_REGISTER_METHOD(0x0293FDA0, app::X509Certificate_2 *, get_Current_2, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0293FE90, app::Object *, IEnumerator_get_Current_2, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0293FF20, bool, IEnumerator_MoveNext_2, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0293FFB0, void, IEnumerator_Reset_2, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02940040, bool, MoveNext_2, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029400D0, void, Reset, (app::X509CertificateCollection_X509CertificateEnumerator_2 * this_ptr))
}
