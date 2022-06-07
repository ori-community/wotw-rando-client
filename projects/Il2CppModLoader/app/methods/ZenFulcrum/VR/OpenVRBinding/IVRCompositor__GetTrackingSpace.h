#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetTrackingSpace {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetTrackingSpace * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, app::ETrackingUniverseOrigin__Enum, Invoke, (app::IVRCompositor_GetTrackingSpace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetTrackingSpace * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::ETrackingUniverseOrigin__Enum, EndInvoke, (app::IVRCompositor_GetTrackingSpace * this_ptr, app::IAsyncResult * result))
}
