#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/DnsEndPoint.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::DnsEndPoint {
    IL2CPP_REGISTER_METHOD(0x01EB37F0, void, ctor_1, app::DnsEndPoint* this_ptr, app::String* host, int32_t port)
    IL2CPP_REGISTER_METHOD(0x01EB3810, void, ctor_2, app::DnsEndPoint* this_ptr, app::String* host, int32_t port, app::AddressFamily__Enum address_family)
    IL2CPP_REGISTER_METHOD(0x01EB3A10, bool, Equals, app::DnsEndPoint* this_ptr, app::Object* comparand)
    IL2CPP_REGISTER_METHOD(0x01EB3B40, int32_t, GetHashCode, app::DnsEndPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB3C20, app::String*, ToString, app::DnsEndPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Host, app::DnsEndPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, app::AddressFamily__Enum, get_AddressFamily, app::DnsEndPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Port, app::DnsEndPoint* this_ptr)
} // namespace app::classes::System::Net::DnsEndPoint
