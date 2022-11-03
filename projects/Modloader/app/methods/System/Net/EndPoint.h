#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::EndPoint {
    IL2CPP_REGISTER_METHOD(0x01EB4230, app::AddressFamily__Enum, get_AddressFamily, (app::EndPoint * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EB28, EndPoint_get_AddressFamily__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB4270, app::SocketAddress*, Serialize, (app::EndPoint * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474EB60, EndPoint_Serialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB42B0, app::EndPoint*, Create, (app::EndPoint * this_ptr, app::SocketAddress* socket_address))
    IL2CPP_REGISTER_METHODINFO(0x0478A620, EndPoint_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EndPoint * this_ptr))
} // namespace app::classes::System::Net::EndPoint
