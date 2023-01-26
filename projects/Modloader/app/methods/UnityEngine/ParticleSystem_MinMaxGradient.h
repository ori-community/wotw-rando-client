#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParticleSystem_MinMaxGradient__Boxed.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/ParticleSystemGradientMode__Enum.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>

namespace app::classes::UnityEngine::ParticleSystem_MinMaxGradient {
    IL2CPP_REGISTER_METHOD(0x00248760, void, ctor, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Color color))
    IL2CPP_REGISTER_METHOD(0x001EBC90, app::ParticleSystemGradientMode__Enum, get_mode, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FBBA0, app::Gradient*, get_gradientMax, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_gradientMax, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Gradient* value))
    IL2CPP_REGISTER_METHOD(0x001FBB90, app::Gradient*, get_gradientMin, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_gradientMin, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Gradient* value))
    IL2CPP_REGISTER_METHOD(0x00248780, app::Color, get_colorMax, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00248790, void, set_colorMax, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D9AE0, app::Color, get_colorMin, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9AF0, void, set_colorMin, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00248780, app::Color, get_color, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00248790, void, set_color, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001FBBA0, app::Gradient*, get_gradient, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_gradient, (app::ParticleSystem_MinMaxGradient__Boxed * this_ptr, app::Gradient* value))
    IL2CPP_REGISTER_METHOD(0x03135430, app::ParticleSystem_MinMaxGradient, op_Implicit, (app::Color color))
} // namespace app::classes::UnityEngine::ParticleSystem_MinMaxGradient
