#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/SecurityAction__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebPermissionAttribute.h>

namespace app::classes::System::Net::WebPermissionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::WebPermissionAttribute* this_ptr, app::SecurityAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x01D7F640, app::String*, get_Connect, app::WebPermissionAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D7F6E0, void, set_Connect, app::WebPermissionAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D7F820, app::String*, get_Accept, app::WebPermissionAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D7F8C0, void, set_Accept, app::WebPermissionAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D7FA00, app::String*, get_ConnectPattern, app::WebPermissionAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D7FB40, void, set_ConnectPattern, app::WebPermissionAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D7FDA0, app::String*, get_AcceptPattern, app::WebPermissionAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D7FEE0, void, set_AcceptPattern, app::WebPermissionAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D80140, app::IPermission*, CreatePermission, app::WebPermissionAttribute* this_ptr)
} // namespace app::classes::System::Net::WebPermissionAttribute
