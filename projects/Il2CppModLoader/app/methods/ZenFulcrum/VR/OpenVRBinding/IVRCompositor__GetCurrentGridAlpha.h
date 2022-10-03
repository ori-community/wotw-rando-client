#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentGridAlpha {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetCurrentGridAlpha * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x028815A0, float, Invoke, (app::IVRCompositor_GetCurrentGridAlpha * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_GetCurrentGridAlpha * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::IVRCompositor_GetCurrentGridAlpha * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentGridAlpha
