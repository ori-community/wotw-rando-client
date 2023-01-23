#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CVRChaperone.h>
#include <Modloader/app/structs/ChaperoneCalibrationState__Enum.h>
#include <Modloader/app/structs/HmdQuad_t.h>
#include <Modloader/app/structs/HmdColor_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRChaperone {
    IL2CPP_REGISTER_METHOD(0x01677280, void, ctor, (app::CVRChaperone * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x016773B0, app::ChaperoneCalibrationState__Enum, GetCalibrationState, (app::CVRChaperone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016773D0, bool, GetPlayAreaSize, (app::CVRChaperone * this_ptr, float* p_size_x, float* p_size_z))
    IL2CPP_REGISTER_METHOD(0x01677400, bool, GetPlayAreaRect, (app::CVRChaperone * this_ptr, app::HmdQuad_t* rect))
    IL2CPP_REGISTER_METHOD(0x00F6DFD0, void, ReloadInfo, (app::CVRChaperone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01677420, void, SetSceneColor, (app::CVRChaperone * this_ptr, app::HmdColor_t color))
    IL2CPP_REGISTER_METHOD(0x01677450, void, GetBoundsColor, (app::CVRChaperone * this_ptr, app::HmdColor_t* p_output_color_array, int32_t n_num_output_colors, float fl_collision_bounds_fade_distance, app::HmdColor_t* p_output_camera_color))
    IL2CPP_REGISTER_METHOD(0x01677480, bool, AreBoundsVisible, (app::CVRChaperone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016774A0, void, ForceBoundsVisible, (app::CVRChaperone * this_ptr, bool b_force))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRChaperone
