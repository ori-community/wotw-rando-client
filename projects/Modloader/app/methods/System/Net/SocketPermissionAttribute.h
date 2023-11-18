#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SocketPermissionAttribute.h>
#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/SecurityAction__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::SocketPermissionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::SocketPermissionAttribute * this_ptr, app::SecurityAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Access, (app::SocketPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDF8D0, void, set_Access, (app::SocketPermissionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Host, (app::SocketPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDF970, void, set_Host, (app::SocketPermissionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Port, (app::SocketPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDFA10, void, set_Port, (app::SocketPermissionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Transport, (app::SocketPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDFAB0, void, set_Transport, (app::SocketPermissionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01BDFB50, app::IPermission*, CreatePermission, (app::SocketPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BE01F0, void, AlreadySet, (app::SocketPermissionAttribute * this_ptr, app::String* property))
} // namespace app::classes::System::Net::SocketPermissionAttribute
