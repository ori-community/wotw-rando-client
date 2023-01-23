#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::UberShaderRuntimeAnchoredTexture {
    IL2CPP_REGISTER_METHOD(0x00575450, bool, get_HasAnchor, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575460, void, set_HasAnchor, (app::UberShaderRuntimeAnchoredTexture * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00575470, bool, get_HasLookAtTarget, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575480, void, set_HasLookAtTarget, (app::UberShaderRuntimeAnchoredTexture * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReady, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191C830, void, Populate, (app::UberShaderRuntimeAnchoredTexture * this_ptr, app::UberShaderTexture* uber_shader_texture, app::UberShaderModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x0191CAD0, void, UpdateFlags, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191CB90, void, OnEnable, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191CC50, void, OnDisable, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberShaderRuntimeAnchoredTexture * this_ptr))
} // namespace app::classes::UberShaderRuntimeAnchoredTexture
