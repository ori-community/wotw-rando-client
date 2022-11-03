#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeToColor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_FadeToColor * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F41370, void, Invoke, (app::IVRCompositor_FadeToColor * this_ptr, float f_seconds, float f_red, float f_green, float f_blue, float f_alpha, bool b_background))
    IL2CPP_REGISTER_METHOD(0x02F418F0, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_FadeToColor * this_ptr, float f_seconds, float f_red, float f_green, float f_blue, float f_alpha, bool b_background, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_FadeToColor * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeToColor
