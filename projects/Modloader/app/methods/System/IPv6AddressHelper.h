#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Int32_.h>

namespace app::classes::System::IPv6AddressHelper {
    IL2CPP_REGISTER_METHOD(0x0200BB50, app::String*, ParseCanonicalName, (app::String * str, int32_t start, bool* is_loopback, app::String** scope_id))
    IL2CPP_REGISTER_METHOD(0x0200BC50, app::String*, CreateCanonicalName, (uint16_t * numbers))
    IL2CPP_REGISTER_METHOD(0x0200C580, app::KeyValuePair_2_System_Int32_System_Int32_, FindCompressionRange, (uint16_t * numbers))
    IL2CPP_REGISTER_METHOD(0x0200C660, bool, ShouldHaveIpv4Embedded, (uint16_t * numbers))
    IL2CPP_REGISTER_METHOD(0x0200C6D0, bool, InternalIsValid, (uint16_t * name, int32_t start, int32_t* end, bool validate_strict_address))
    IL2CPP_REGISTER_METHOD(0x0200CA30, bool, IsValid, (uint16_t * name, int32_t start, int32_t* end))
    IL2CPP_REGISTER_METHOD(0x0200CA50, bool, IsValidStrict, (uint16_t * name, int32_t start, int32_t* end))
    IL2CPP_REGISTER_METHOD(0x0200CA70, bool, Parse, (app::String * address, uint16_t* numbers, int32_t start, app::String** scope_id))
} // namespace app::classes::System::IPv6AddressHelper
