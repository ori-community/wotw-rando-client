#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509CertificateImpl {
    IL2CPP_REGISTER_METHOD(0x01E16BD0, void, ThrowIfContextInvalid, (app::X509CertificateImpl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475AFA8, X509CertificateImpl_ThrowIfContextInvalid__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E16C70, app::Byte__Array*, GetCertHash, (app::X509CertificateImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E16CB0, int32_t, GetHashCode, (app::X509CertificateImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E16D90, bool, Equals, (app::X509CertificateImpl * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01E16F60, void, Dispose_1, (app::X509CertificateImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D180, void, Dispose_2, (app::X509CertificateImpl * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01E17010, void, Finalize, (app::X509CertificateImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::X509CertificateImpl * this_ptr))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509CertificateImpl
