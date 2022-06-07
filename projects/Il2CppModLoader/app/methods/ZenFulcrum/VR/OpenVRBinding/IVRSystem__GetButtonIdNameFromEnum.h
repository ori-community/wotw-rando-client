#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetButtonIdNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::EVRButtonId__Enum e_button_id))
    IL2CPP_REGISTER_METHOD(0x02CEAB80, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::EVRButtonId__Enum e_button_id, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::IAsyncResult * result))
}
