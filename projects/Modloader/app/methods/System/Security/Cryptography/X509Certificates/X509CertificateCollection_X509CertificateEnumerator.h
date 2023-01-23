#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator_1.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator {
    IL2CPP_REGISTER_METHOD(0x021CBB00, void, ctor, (app::X509CertificateCollection_X509CertificateEnumerator_1 * this_ptr, app::X509CertificateCollection_1* mappings))
    IL2CPP_REGISTER_METHOD(0x021CBBA0, app::X509Certificate_1*, get_Current, (app::X509CertificateCollection_X509CertificateEnumerator_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CBC90, app::Object*, IEnumerator_get_Current, (app::X509CertificateCollection_X509CertificateEnumerator_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CBD20, bool, IEnumerator_MoveNext, (app::X509CertificateCollection_X509CertificateEnumerator_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CBDB0, void, IEnumerator_Reset, (app::X509CertificateCollection_X509CertificateEnumerator_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CBE40, bool, MoveNext, (app::X509CertificateCollection_X509CertificateEnumerator_1 * this_ptr))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator
