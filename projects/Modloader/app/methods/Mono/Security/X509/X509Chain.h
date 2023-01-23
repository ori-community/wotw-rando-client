#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509Chain_1.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#include <Modloader/app/structs/X509ChainStatusFlags__Enum_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::X509::X509Chain {
    IL2CPP_REGISTER_METHOD(0x02940160, void, ctor_1, (app::X509Chain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029402B0, void, ctor_2, (app::X509Chain_1 * this_ptr, app::X509CertificateCollection_2* chain))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::X509CertificateCollection_2*, get_Chain, (app::X509Chain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::X509Certificate_2*, get_Root, (app::X509Chain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, app::X509ChainStatusFlags__Enum_1, get_Status, (app::X509Chain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02940420, app::X509CertificateCollection_2*, get_TrustAnchors, (app::X509Chain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TrustAnchors, (app::X509Chain_1 * this_ptr, app::X509CertificateCollection_2* value))
    IL2CPP_REGISTER_METHOD(0x029405A0, void, LoadCertificate, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* x509))
    IL2CPP_REGISTER_METHOD(0x029405C0, void, LoadCertificates, (app::X509Chain_1 * this_ptr, app::X509CertificateCollection_2* collection))
    IL2CPP_REGISTER_METHOD(0x029405E0, app::X509Certificate_2*, FindByIssuerName, (app::X509Chain_1 * this_ptr, app::String* issuer_name))
    IL2CPP_REGISTER_METHOD(0x029407D0, bool, Build, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* leaf))
    IL2CPP_REGISTER_METHOD(0x02940C30, void, Reset, (app::X509Chain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02940D10, bool, IsValid, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* cert))
    IL2CPP_REGISTER_METHOD(0x02940DF0, app::X509Certificate_2*, FindCertificateParent, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* child))
    IL2CPP_REGISTER_METHOD(0x02940FB0, app::X509Certificate_2*, FindCertificateRoot, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* potential_root))
    IL2CPP_REGISTER_METHOD(0x029411F0, bool, IsTrusted, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* potential_trusted))
    IL2CPP_REGISTER_METHOD(0x02941230, bool, IsParent, (app::X509Chain_1 * this_ptr, app::X509Certificate_2* child, app::X509Certificate_2* parent))
} // namespace app::classes::Mono::Security::X509::X509Chain
