#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SocketAddress.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::IPEndPoint {
    IL2CPP_REGISTER_METHOD(0x004F0AC0, app::AddressFamily__Enum, get_AddressFamily, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E68D80, void, ctor_1, (app::IPEndPoint * this_ptr, int64_t address, int32_t port))
    IL2CPP_REGISTER_METHOD(0x01E68F50, void, ctor_2, (app::IPEndPoint * this_ptr, app::IPAddress* address, int32_t port))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IPAddress*, get_Address, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Address, (app::IPEndPoint * this_ptr, app::IPAddress* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Port, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E69070, void, set_Port, (app::IPEndPoint * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E69150, app::String*, ToString, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E69290, app::SocketAddress*, Serialize, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E69440, app::EndPoint*, Create, (app::IPEndPoint * this_ptr, app::SocketAddress* socket_address))
    IL2CPP_REGISTER_METHOD(0x01E697C0, bool, Equals, (app::IPEndPoint * this_ptr, app::Object* comparand))
    IL2CPP_REGISTER_METHOD(0x01E69980, int32_t, GetHashCode, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E699C0, app::IPEndPoint*, Snapshot, (app::IPEndPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E69B30, void, cctor, ())
} // namespace app::classes::System::Net::IPEndPoint
