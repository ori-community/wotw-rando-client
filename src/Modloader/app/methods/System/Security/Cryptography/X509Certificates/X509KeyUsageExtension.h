#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#include <Modloader/app/structs/AsnEncodedData.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509KeyUsageExtension.h>
#include <Modloader/app/structs/X509KeyUsageFlags__Enum.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension {
    IL2CPP_REGISTER_METHOD(0x0257C610, void, ctor_1, app::X509KeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0257C770, void, ctor_2, app::X509KeyUsageExtension* this_ptr, app::AsnEncodedData* encoded_key_usage, bool critical)
    IL2CPP_REGISTER_METHOD(0x0257C900, void, ctor_3, app::X509KeyUsageExtension* this_ptr, app::X509KeyUsageFlags__Enum key_usages, bool critical)
    IL2CPP_REGISTER_METHOD(0x0257CAA0, app::X509KeyUsageFlags__Enum, get_KeyUsages, app::X509KeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0257CB60, void, CopyFrom, app::X509KeyUsageExtension* this_ptr, app::AsnEncodedData* asn_encoded_data)
    IL2CPP_REGISTER_METHOD(0x0257CE70, app::X509KeyUsageFlags__Enum, GetValidFlags, app::X509KeyUsageExtension* this_ptr, app::X509KeyUsageFlags__Enum flags)
    IL2CPP_REGISTER_METHOD(0x0257CE80, app::AsnDecodeStatus__Enum, Decode, app::X509KeyUsageExtension* this_ptr, app::Byte__Array* extension)
    IL2CPP_REGISTER_METHOD(0x0257D0F0, app::Byte__Array*, Encode, app::X509KeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0257D640, app::String*, ToString, app::X509KeyUsageExtension* this_ptr, bool multi_line)
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension
