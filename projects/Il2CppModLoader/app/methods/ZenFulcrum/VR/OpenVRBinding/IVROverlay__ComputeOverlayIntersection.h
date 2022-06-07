#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ComputeOverlayIntersection {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_ComputeOverlayIntersection * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D78E20, bool, Invoke, (app::IVROverlay_ComputeOverlayIntersection * this_ptr, uint64_t ul_overlay_handle, app::VROverlayIntersectionParams_t * p_params, app::VROverlayIntersectionResults_t * p_results))
    IL2CPP_REGISTER_METHOD(0x02D791C0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_ComputeOverlayIntersection * this_ptr, uint64_t ul_overlay_handle, app::VROverlayIntersectionParams_t * p_params, app::VROverlayIntersectionResults_t * p_results, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVROverlay_ComputeOverlayIntersection * this_ptr, app::VROverlayIntersectionParams_t * p_params, app::VROverlayIntersectionResults_t * p_results, app::IAsyncResult * result))
}
