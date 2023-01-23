#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::Frameworks::Shader_Globals {
    IL2CPP_REGISTER_METHOD(0x01644DB0, void, SetFogGradient, (app::Color__Array * gradient))
    IL2CPP_REGISTER_METHOD(0x01644E50, void, SetMultiplyFogGradient, (app::Color__Array * gradient))
    IL2CPP_REGISTER_METHOD(0x01644EF0, void, set_FogGradientTexture, (app::Texture * value))
    IL2CPP_REGISTER_METHOD(0x01645000, app::Texture*, get_FogGradientTexture, ())
    IL2CPP_REGISTER_METHOD(0x016450A0, void, set_FogGradientArray, (app::Color__Array * value))
    IL2CPP_REGISTER_METHOD(0x01645230, void, set_MultiplyFogGradientTexture, (app::Texture * value))
    IL2CPP_REGISTER_METHOD(0x01645340, app::Texture*, get_MultiplyFogGradientTexture, ())
    IL2CPP_REGISTER_METHOD(0x016453E0, void, set_MultiplyFogGradientArray, (app::Color__Array * value))
    IL2CPP_REGISTER_METHOD(0x01645570, void, set_FogGradientRange, (float value))
    IL2CPP_REGISTER_METHOD(0x01645670, app::Texture2D*, GetFogGradientTexture, ())
    IL2CPP_REGISTER_METHOD(0x01645880, app::Texture2D*, GetMultiplyFogGradientTexture, ())
    IL2CPP_REGISTER_METHOD(0x01645A90, void, cctor, ())
} // namespace app::classes::Frameworks::Shader_Globals
