#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MonoBehaviour.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::ImageEffectHelper {
    IL2CPP_REGISTER_METHOD(0x02506A60, bool, IsSupported, (app::Shader * s, bool need_depth, bool need_hdr, app::MonoBehaviour* effect))
    IL2CPP_REGISTER_METHOD(0x02506E40, app::Material*, CheckShaderAndCreateMaterial, (app::Shader * s))
    IL2CPP_REGISTER_METHOD(0x02507050, bool, get_supportsDX11, ())
} // namespace app::classes::UnityStandardAssets::CinematicEffects::ImageEffectHelper
