#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE61E0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, uint64_t ul_overlay_handle, float* pf_min_distance_in_meters, float* pf_max_distance_in_meters))
    IL2CPP_REGISTER_METHOD(0x02D7A430, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, uint64_t ul_overlay_handle, float* pf_min_distance_in_meters, float* pf_max_distance_in_meters, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * this_ptr, float* pf_min_distance_in_meters, float* pf_max_distance_in_meters, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters
