#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::SliceRenderSettings_Slice {
    IL2CPP_REGISTER_METHOD(0x00120380, void, Lerp, (app::SliceRenderSettings_Slice__Boxed * this_ptr, app::SliceRenderSettings_Slice from, app::SliceRenderSettings_Slice to, float t))
    IL2CPP_REGISTER_METHOD(0x00EBDA20, float, GetPixelRadius, (float blur_amount, int32_t resolution_x))
    IL2CPP_REGISTER_METHOD(0x00EBDAE0, float, GetCameraMotionBlurPixelRadius, (float blur_force, float r_t_pixel_size))
    IL2CPP_REGISTER_METHOD(0x00EBDBA0, int32_t, FindKernelByRadius, (app::Single__Array * kernel_settings, float kernel_pixel_radius))
    IL2CPP_REGISTER_METHOD(0x00EBDC20, void, GetComputeKernel, (float kernel_pixel_radius, float cam_movement_delta, int32_t* kernel_pass_index, int32_t* thread_size, int32_t* pass_max_radius, int32_t* pass_index))
    IL2CPP_REGISTER_METHOD(0x00EBDDE0, int32_t, GetKernelPassIndex, (float kernel_pixel_radius, float cam_movement_delta, int32_t kernel_bias, bool use_bilinear, bool use_lin_m_b))
    IL2CPP_REGISTER_METHOD(0x00EBDFB0, app::String*, GetKernelPassName_1, (int32_t index))
    IL2CPP_REGISTER_METHOD(0x00EBE080, app::String*, GetKernelPassName_2, (float kernel_radius, float min_r_tize, int32_t kernel_bias, int32_t slice_index, float cam_movement_delta, bool use_lin_m_b))
    IL2CPP_REGISTER_METHOD(0x00EBE190, void, cctor, ())
} // namespace app::classes::Moon::Rendering::SliceRenderSettings_Slice
