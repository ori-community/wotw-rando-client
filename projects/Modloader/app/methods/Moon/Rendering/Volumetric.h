#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Volumetric.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/VolumetricAreaLight.h>
#include <Modloader/app/structs/VolumetricConfig.h>
#include <Modloader/app/structs/VolumetricPointLight.h>

namespace app::classes::Moon::Rendering::Volumetric {
    IL2CPP_REGISTER_METHOD(0x00EBEBD0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00EBECF0, bool, get_ShouldRender, (app::Volumetric * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::VolumetricConfig*, get_Config, ())
    IL2CPP_REGISTER_METHOD(0x00EBEE50, void, Register_1, (app::VolumetricPointLight * light))
    IL2CPP_REGISTER_METHOD(0x00EBEF70, void, Deregister_1, (app::VolumetricPointLight * light))
    IL2CPP_REGISTER_METHOD(0x00EBF030, void, Register_2, (app::VolumetricAreaLight * light))
    IL2CPP_REGISTER_METHOD(0x00EBF150, void, Deregister_2, (app::VolumetricAreaLight * light))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Begin, (app::Volumetric * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EBF210, void, End, (app::Volumetric * this_ptr, app::CommandBuffer* cmd))
    IL2CPP_REGISTER_METHOD(0x00EBF2A0, int32_t, GetResolutionFraction, (app::Volumetric * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EBF330, void, SetupConfig, (app::Volumetric * this_ptr, app::CommandBuffer* cmd, float mie_scattering_factor, float ray_amount, float extinction_coeff, float camera_ray_marching_step_size, float light_ray_marching_step_since_size, bool enable_noise, float noise_speed, float noise_size, float noise_strength, float max_pixel_intensity))
    IL2CPP_REGISTER_METHOD(0x00EBF860, void, Render, (app::Volumetric * this_ptr, app::Camera* cull_cam, app::CommandBuffer* cmd, app::RenderTarget* depth, app::RenderTarget* light_band_weights, app::RenderTargetIdentifier dest, int32_t slice, app::RenderTarget* alpha_tex))
    IL2CPP_REGISTER_METHOD(0x00EBF990, void, ctor, (app::Volumetric * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EBFA20, void, cctor, ())
} // namespace app::classes::Moon::Rendering::Volumetric
