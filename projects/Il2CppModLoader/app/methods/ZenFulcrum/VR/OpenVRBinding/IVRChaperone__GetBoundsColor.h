#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetBoundsColor {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperone_GetBoundsColor * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F3F7C0, void, Invoke, (app::IVRChaperone_GetBoundsColor * this_ptr, app::HmdColor_t* p_output_color_array, int32_t n_num_output_colors, float fl_collision_bounds_fade_distance, app::HmdColor_t* p_output_camera_color))
    IL2CPP_REGISTER_METHOD(0x02F3FBB0, app::IAsyncResult*, BeginInvoke, (app::IVRChaperone_GetBoundsColor * this_ptr, app::HmdColor_t* p_output_color_array, int32_t n_num_output_colors, float fl_collision_bounds_fade_distance, app::HmdColor_t* p_output_camera_color, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::IVRChaperone_GetBoundsColor * this_ptr, app::HmdColor_t* p_output_color_array, app::HmdColor_t* p_output_camera_color, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetBoundsColor
