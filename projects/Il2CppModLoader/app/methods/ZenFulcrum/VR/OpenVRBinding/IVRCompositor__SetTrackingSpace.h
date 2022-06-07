#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetTrackingSpace {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin))
    IL2CPP_REGISTER_METHOD(0x02F432C0, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::IAsyncResult * result))
}
