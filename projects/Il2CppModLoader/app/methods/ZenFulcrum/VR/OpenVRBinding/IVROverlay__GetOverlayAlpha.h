#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAlpha {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayAlpha * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayAlpha * this_ptr, uint64_t ul_overlay_handle, float * pf_alpha))
    IL2CPP_REGISTER_METHOD(0x02D7A350, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayAlpha * this_ptr, uint64_t ul_overlay_handle, float * pf_alpha, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayAlpha * this_ptr, float * pf_alpha, app::IAsyncResult * result))
}
