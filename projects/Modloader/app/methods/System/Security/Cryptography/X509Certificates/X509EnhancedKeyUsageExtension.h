#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension {
    IL2CPP_REGISTER_METHOD(0x021D4A00, void, ctor, (app::X509EnhancedKeyUsageExtension * this_ptr, app::AsnEncodedData* encoded_enhanced_key_usages, bool critical))
    IL2CPP_REGISTER_METHOD(0x021D4B90, void, CopyFrom, (app::X509EnhancedKeyUsageExtension * this_ptr, app::AsnEncodedData* asn_encoded_data))
    IL2CPP_REGISTER_METHODINFO(0x04740638, X509EnhancedKeyUsageExtension_CopyFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021D4EA0, app::AsnDecodeStatus__Enum, Decode, (app::X509EnhancedKeyUsageExtension * this_ptr, app::Byte__Array* extension))
    IL2CPP_REGISTER_METHODINFO(0x04750870, X509EnhancedKeyUsageExtension_Decode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021D52F0, app::String*, ToString, (app::X509EnhancedKeyUsageExtension * this_ptr, bool multi_line))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension
