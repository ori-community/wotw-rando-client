#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPv6AddressFormatter__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt16__Array.h>

namespace app::classes::System::Net::IPv6AddressFormatter {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, app::IPv6AddressFormatter__Boxed* this_ptr, app::UInt16__Array* addr, int64_t scope_id)
    IL2CPP_REGISTER_METHOD(0x01E69DB0, uint16_t, SwapUShort, uint16_t number)
    IL2CPP_REGISTER_METHOD(0x001D7240, uint32_t, AsIPv4Int, app::IPv6AddressFormatter__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D7250, bool, IsIPv4Compatible, app::IPv6AddressFormatter__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D7260, bool, IsIPv4Mapped, app::IPv6AddressFormatter__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D7270, app::String*, ToString, app::IPv6AddressFormatter__Boxed* this_ptr)
} // namespace app::classes::System::Net::IPv6AddressFormatter
