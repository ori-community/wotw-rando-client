#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__SetSceneColor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperone_SetSceneColor * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::IVRChaperone_SetSceneColor * this_ptr, app::HmdColor_t color))
    IL2CPP_REGISTER_METHOD(0x02F3FE80, app::IAsyncResult *, BeginInvoke, (app::IVRChaperone_SetSceneColor * this_ptr, app::HmdColor_t color, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperone_SetSceneColor * this_ptr, app::IAsyncResult * result))
}
