#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexelAspect {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, uint64_t ul_overlay_handle, float * pf_texel_aspect))
    IL2CPP_REGISTER_METHOD(0x02D7BD50, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, uint64_t ul_overlay_handle, float * pf_texel_aspect, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTexelAspect * this_ptr, float * pf_texel_aspect, app::IAsyncResult * result))
}
