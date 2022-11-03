#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentFadeColor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetCurrentFadeColor * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F41BE0, app::HmdColor_t, Invoke, (app::IVRCompositor_GetCurrentFadeColor * this_ptr, bool b_background))
    IL2CPP_REGISTER_METHOD(0x02F41FE0, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_GetCurrentFadeColor * this_ptr, bool b_background, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::HmdColor_t, EndInvoke, (app::IVRCompositor_GetCurrentFadeColor * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentFadeColor
