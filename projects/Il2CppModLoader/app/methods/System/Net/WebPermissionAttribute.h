#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::WebPermissionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::WebPermissionAttribute * this_ptr, app::SecurityAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x01D7F640, app::String *, get_Connect, (app::WebPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7F6E0, void, set_Connect, (app::WebPermissionAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04709428, WebPermissionAttribute_set_Connect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D7F820, app::String *, get_Accept, (app::WebPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7F8C0, void, set_Accept, (app::WebPermissionAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04714D28, WebPermissionAttribute_set_Accept__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D7FA00, app::String *, get_ConnectPattern, (app::WebPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7FB40, void, set_ConnectPattern, (app::WebPermissionAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0473E270, WebPermissionAttribute_set_ConnectPattern__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D7FDA0, app::String *, get_AcceptPattern, (app::WebPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7FEE0, void, set_AcceptPattern, (app::WebPermissionAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0473E260, WebPermissionAttribute_set_AcceptPattern__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D80140, app::IPermission *, CreatePermission, (app::WebPermissionAttribute * this_ptr))
}
