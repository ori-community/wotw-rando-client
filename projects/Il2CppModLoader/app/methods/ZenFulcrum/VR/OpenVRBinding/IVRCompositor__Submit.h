#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__Submit {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_Submit * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CEA590, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_Submit * this_ptr, app::EVREye__Enum e_eye, app::Texture_t * p_texture, app::VRTextureBounds_t * p_bounds, app::EVRSubmitFlags__Enum n_submit_flags))
    IL2CPP_REGISTER_METHOD(0x02F43380, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_Submit * this_ptr, app::EVREye__Enum e_eye, app::Texture_t * p_texture, app::VRTextureBounds_t * p_bounds, app::EVRSubmitFlags__Enum n_submit_flags, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_Submit * this_ptr, app::Texture_t * p_texture, app::VRTextureBounds_t * p_bounds, app::IAsyncResult * result))
}
