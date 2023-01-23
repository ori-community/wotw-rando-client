#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/INativeCertificateHelper.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/X509Certificate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509KeyStorageFlags__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Helper {
    IL2CPP_REGISTER_METHOD(0x01E178B0, void, InstallNativeHelper, (app::INativeCertificateHelper * helper))
    IL2CPP_REGISTER_METHOD(0x01E17940, app::X509CertificateImpl*, Import_1, (app::Byte__Array * raw_data))
    IL2CPP_REGISTER_METHOD(0x01E17950, app::X509CertificateImpl*, InitFromCertificate_1, (app::X509Certificate_1 * cert))
    IL2CPP_REGISTER_METHOD(0x01E17A80, app::X509CertificateImpl*, InitFromCertificate_2, (app::X509CertificateImpl * impl))
    IL2CPP_REGISTER_METHOD(0x01E17CF0, bool, IsValid, (app::X509CertificateImpl * impl))
    IL2CPP_REGISTER_METHOD(0x01E17D10, void, ThrowIfContextInvalid, (app::X509CertificateImpl * impl))
    IL2CPP_REGISTER_METHODINFO(0x04726110, X509Helper_ThrowIfContextInvalid__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E17DC0, app::Exception*, GetInvalidContextException, ())
    IL2CPP_REGISTER_METHOD(0x01E17F20, app::X509Certificate*, ImportPkcs12, (app::Byte__Array * raw_data, app::String* password))
    IL2CPP_REGISTER_METHOD(0x01E18530, app::Byte__Array*, PEM, (app::String * type, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x01E18730, app::Byte__Array*, ConvertData, (app::Byte__Array * data))
    IL2CPP_REGISTER_METHOD(0x01E18810, app::X509CertificateImpl*, ImportCore, (app::Byte__Array * raw_data))
    IL2CPP_REGISTER_METHODINFO(0x04733708, X509Helper_ImportCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E18A80, app::X509CertificateImpl*, Import_2, (app::Byte__Array * raw_data, app::String* password, app::X509KeyStorageFlags__Enum key_storage_flags))
    IL2CPP_REGISTER_METHOD(0x01E18CD0, app::String*, ToHexString, (app::Byte__Array * data))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Helper
