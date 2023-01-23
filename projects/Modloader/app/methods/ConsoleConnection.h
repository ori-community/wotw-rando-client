#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConsoleConnection.h>
#include <Modloader/app/structs/ConsoleConnection_State__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ConsoleConnection {
    IL2CPP_REGISTER_METHOD(0x011E4E90, void, ctor, (app::ConsoleConnection * this_ptr, bool receive_files))
    IL2CPP_REGISTER_METHOD(0x011E4EF0, void, Close, (app::ConsoleConnection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E4F40, void, Update, (app::ConsoleConnection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E4FA0, void, UpdateState, (app::ConsoleConnection * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x011E53C0, void, ChangeState, (app::ConsoleConnection * this_ptr, app::ConsoleConnection_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x011E5870, void, ReceiveFile, (app::ConsoleConnection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047399B8, ConsoleConnection_ReceiveFile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011E5B40, void, ReceiveFileSwitch, (app::ConsoleConnection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E5EA0, void, Connect, (app::ConsoleConnection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709CD8, ConsoleConnection_Connect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011E61B0, bool, RequestReplay_1, (app::ConsoleConnection * this_ptr, app::String* path, float duration))
    IL2CPP_REGISTER_METHOD(0x011E61E0, bool, RequestReplay_2, (app::ConsoleConnection * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x011E6200, bool, RequestScreenshot, (app::ConsoleConnection * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, IsConnected, (app::ConsoleConnection * this_ptr))
} // namespace app::classes::ConsoleConnection
