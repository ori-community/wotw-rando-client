#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/SocketAddress.h>

namespace app::classes::System::Net::EndPoint {
    IL2CPP_REGISTER_METHOD(0x01EB4230, app::AddressFamily__Enum, get_AddressFamily, (app::EndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB4270, app::SocketAddress*, Serialize, (app::EndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB42B0, app::EndPoint*, Create, (app::EndPoint * this_ptr, app::SocketAddress* socket_address))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EndPoint * this_ptr))
} // namespace app::classes::System::Net::EndPoint
