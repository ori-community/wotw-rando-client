#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsnEncodedData.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Oid.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::AsnEncodedData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::AsnEncodedData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021BD4B0, void, ctor_2, app::AsnEncodedData* this_ptr, app::String* oid, app::Byte__Array* raw_data)
    IL2CPP_REGISTER_METHOD(0x021BD630, void, ctor_3, app::AsnEncodedData* this_ptr, app::Oid* oid, app::Byte__Array* raw_data)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Oid*, get_Oid, app::AsnEncodedData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021BD660, void, set_Oid, app::AsnEncodedData* this_ptr, app::Oid* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Byte__Array*, get_RawData, app::AsnEncodedData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021BD7D0, void, set_RawData, app::AsnEncodedData* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x021BD950, void, CopyFrom, app::AsnEncodedData* this_ptr, app::AsnEncodedData* asn_encoded_data)
    IL2CPP_REGISTER_METHOD(0x021BDB70, app::String*, Format, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BDC50, app::String*, ToString, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BDEE0, app::String*, Default, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BE120, app::String*, BasicConstraintsExtension, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BE2C0, app::String*, EnhancedKeyUsageExtension, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BE460, app::String*, KeyUsageExtension, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BE600, app::String*, SubjectKeyIdentifierExtension, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BE7A0, app::String*, SubjectAltName, app::AsnEncodedData* this_ptr, bool multi_line)
    IL2CPP_REGISTER_METHOD(0x021BEBF0, app::String*, NetscapeCertType, app::AsnEncodedData* this_ptr, bool multi_line)
} // namespace app::classes::System::Security::Cryptography::AsnEncodedData
