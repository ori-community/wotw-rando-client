#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::SocketAddress {
    IL2CPP_REGISTER_METHOD(0x01BDB850, app::AddressFamily__Enum, get_Family, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Size, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDB8C0, uint8_t, get_Item, (app::SocketAddress * this_ptr, int32_t offset))
    IL2CPP_REGISTER_METHODINFO(0x0476EE50, SocketAddress_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDB9A0, void, set_Item, (app::SocketAddress * this_ptr, int32_t offset, uint8_t value))
    IL2CPP_REGISTER_METHODINFO(0x04790830, SocketAddress_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDBAB0, void, ctor_1, (app::SocketAddress * this_ptr, app::AddressFamily__Enum family))
    IL2CPP_REGISTER_METHOD(0x01BDBAC0, void, ctor_2, (app::SocketAddress * this_ptr, app::AddressFamily__Enum family, int32_t size))
    IL2CPP_REGISTER_METHODINFO(0x047588E8, SocketAddress__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDBC00, void, ctor_3, (app::SocketAddress * this_ptr, app::IPAddress* ip_address))
    IL2CPP_REGISTER_METHOD(0x01BDBFF0, void, ctor_4, (app::SocketAddress * this_ptr, app::IPAddress* ipaddress, int32_t port))
    IL2CPP_REGISTER_METHOD(0x01BDC070, app::IPAddress*, GetIPAddress, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755910, SocketAddress_GetIPAddress__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDC5D0, app::IPEndPoint*, GetIPEndPoint, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDC7A0, void, CopyAddressSizeIntoBuffer, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDC8A0, int32_t, GetAddressSizeOffset, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDC8C0, void, SetSize, (app::SocketAddress * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHOD(0x01BDC8D0, bool, Equals, (app::SocketAddress * this_ptr, app::Object* comparand))
    IL2CPP_REGISTER_METHOD(0x01BDC9F0, int32_t, GetHashCode, (app::SocketAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDCBB0, app::String*, ToString, (app::SocketAddress * this_ptr))
} // namespace app::classes::System::Net::SocketAddress
