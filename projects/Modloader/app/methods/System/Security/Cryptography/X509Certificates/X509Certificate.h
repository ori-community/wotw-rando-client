#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509KeyStorageFlags__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate {
    IL2CPP_REGISTER_METHOD(0x01E15DC0, void, ctor_1, app::X509Certificate_1* this_ptr, app::Byte__Array* data, bool dates)
    IL2CPP_REGISTER_METHOD(0x01E15E10, void, ctor_2, app::X509Certificate_1* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x01E15E50, void, ctor_3, app::X509Certificate_1* this_ptr, app::X509CertificateImpl* impl)
    IL2CPP_REGISTER_METHOD(0x01E15F20, void, ctor_4, app::X509Certificate_1* this_ptr, app::X509Certificate_1* cert)
    IL2CPP_REGISTER_METHOD(0x01E160E0, void, ImportHandle, app::X509Certificate_1* this_ptr, app::X509CertificateImpl* impl)
    IL2CPP_REGISTER_METHOD(0x01E16110, app::X509CertificateImpl*, get_Impl, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16130, bool, get_IsValid, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16150, bool, Equals_1, app::X509Certificate_1* this_ptr, app::X509Certificate_1* other)
    IL2CPP_REGISTER_METHOD(0x01E16290, app::Byte__Array*, GetCertHash, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E162F0, app::String*, GetCertHashString, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16320, int32_t, GetHashCode, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16380, app::String*, GetIssuerName, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E163C0, app::String*, GetName, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16400, app::Byte__Array*, GetPublicKey, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16440, app::Byte__Array*, GetRawCertData, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16480, app::Byte__Array*, GetSerialNumber, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E164C0, app::String*, GetSerialNumberString, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16610, app::String*, ToString_1, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16650, app::String*, ToString_2, app::X509Certificate_1* this_ptr, bool f_verbose)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_5, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E166E0, void, ctor_6, app::X509Certificate_1* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01E16810, app::String*, get_Issuer, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16860, app::String*, get_Subject, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E168B0, bool, Equals_2, app::X509Certificate_1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x01E169A0,
        void,
        Import_1,
        app::X509Certificate_1* this_ptr,
        app::Byte__Array* raw_data,
        app::String* password,
        app::X509KeyStorageFlags__Enum key_storage_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01E16A00,
        void,
        Import_2,
        app::X509Certificate_1* this_ptr,
        app::String* file_name,
        app::String* password,
        app::X509KeyStorageFlags__Enum key_storage_flags
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, app::X509Certificate_1* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(
        0x01E16A60,
        void,
        ISerializable_GetObjectData,
        app::X509Certificate_1* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x01D2CEB0, void, Dispose_1, app::X509Certificate_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E16B70, void, Dispose_2, app::X509Certificate_1* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01E16B90, void, Reset, app::X509Certificate_1* this_ptr)
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate
