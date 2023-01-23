#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509ChainPolicy.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/X509RevocationFlag__Enum.h>
#include <Modloader/app/structs/X509RevocationMode__Enum.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/X509VerificationFlags__Enum.h>
#include <Modloader/app/structs/DateTime.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainPolicy {
    IL2CPP_REGISTER_METHOD(0x021D3F90, void, ctor_1, (app::X509ChainPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D3FA0, void, ctor_2, (app::X509ChainPolicy * this_ptr, app::X509CertificateCollection_1* store))
    IL2CPP_REGISTER_METHOD(0x021D3FB0, app::X509Certificate2Collection*, get_ExtraStore, (app::X509ChainPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, app::X509RevocationFlag__Enum, get_RevocationFlag, (app::X509ChainPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D4370, void, set_RevocationFlag, (app::X509ChainPolicy * this_ptr, app::X509RevocationFlag__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04720328, X509ChainPolicy_set_RevocationFlag__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00998570, app::X509RevocationMode__Enum, get_RevocationMode, (app::X509ChainPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D4430, void, set_RevocationMode, (app::X509ChainPolicy * this_ptr, app::X509RevocationMode__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0475B2F0, X509ChainPolicy_set_RevocationMode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_UrlRetrievalTimeout, (app::X509ChainPolicy * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::X509VerificationFlags__Enum, get_VerificationFlags, (app::X509ChainPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D44F0, void, set_VerificationFlags, (app::X509ChainPolicy * this_ptr, app::X509VerificationFlags__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0476B2B8, X509ChainPolicy_set_VerificationFlags__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::DateTime, get_VerificationTime, (app::X509ChainPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D45B0, void, Reset, (app::X509ChainPolicy * this_ptr))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainPolicy
