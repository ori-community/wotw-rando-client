#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt16__Array.h>

namespace app::classes::System::Net::IPAddress {
    IL2CPP_REGISTER_METHOD(0x01E66070, void, ctor_1, app::IPAddress* this_ptr, int64_t new_address)
    IL2CPP_REGISTER_METHOD(0x01E66150, void, ctor_2, app::IPAddress* this_ptr, app::Byte__Array* address, int64_t scopeid)
    IL2CPP_REGISTER_METHOD(0x01E66380, void, ctor_3, app::IPAddress* this_ptr, app::UInt16__Array* address, uint32_t scopeid)
    IL2CPP_REGISTER_METHOD(0x01E66430, void, ctor_4, app::IPAddress* this_ptr, app::Byte__Array* address)
    IL2CPP_REGISTER_METHOD(0x01E66680, void, ctor_5, app::IPAddress* this_ptr, int32_t new_address)
    IL2CPP_REGISTER_METHOD(0x01E66720, bool, TryParse, app::String* ip_string, app::IPAddress** address)
    IL2CPP_REGISTER_METHOD(0x01E667E0, app::IPAddress*, Parse, app::String* ip_string)
    IL2CPP_REGISTER_METHOD(0x01E66880, app::IPAddress*, InternalParse, app::String* ip_string, bool try_parse)
    IL2CPP_REGISTER_METHOD(0x01E66E60, int64_t, get_Address, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E66F10, void, set_Address, app::IPAddress* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01E66FE0, app::Byte__Array*, GetAddressBytes, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::AddressFamily__Enum, get_AddressFamily, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67200, int64_t, get_ScopeId, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E672B0, void, set_ScopeId, app::IPAddress* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01E673B0, app::String*, ToString, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E675D0, int64_t, HostToNetworkOrder_1, int64_t host)
    IL2CPP_REGISTER_METHOD(0x01E67690, int32_t, HostToNetworkOrder_2, int32_t host)
    IL2CPP_REGISTER_METHOD(0x01E67760, int16_t, HostToNetworkOrder_3, int16_t host)
    IL2CPP_REGISTER_METHOD(0x01E67770, int64_t, NetworkToHostOrder_1, int64_t network)
    IL2CPP_REGISTER_METHOD(0x01E678B0, int32_t, NetworkToHostOrder_2, int32_t network)
    IL2CPP_REGISTER_METHOD(0x01E67950, int16_t, NetworkToHostOrder_3, int16_t network)
    IL2CPP_REGISTER_METHOD(0x01E67A00, bool, IsLoopback, app::IPAddress* address)
    IL2CPP_REGISTER_METHOD(0x01E67B50, bool, get_IsBroadcast, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67C20, bool, get_IsIPv6Multicast, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67C70, bool, get_IsIPv6LinkLocal, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67CD0, bool, get_IsIPv6SiteLocal, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67D30, bool, get_IsIPv6Teredo, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67DB0, bool, get_IsIPv4MappedToIPv6, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E67E40, bool, Equals_1, app::IPAddress* this_ptr, app::Object* comparand_obj, bool compare_scope_id)
    IL2CPP_REGISTER_METHOD(0x01E67FB0, bool, Equals_2, app::IPAddress* this_ptr, app::Object* comparand)
    IL2CPP_REGISTER_METHOD(0x01E67FC0, int32_t, GetHashCode, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E680C0, app::IPAddress*, Snapshot, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E68340, app::IPAddress*, MapToIPv6, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E68570, app::IPAddress*, MapToIPv4, app::IPAddress* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E68760, void, cctor, )
} // namespace app::classes::System::Net::IPAddress
