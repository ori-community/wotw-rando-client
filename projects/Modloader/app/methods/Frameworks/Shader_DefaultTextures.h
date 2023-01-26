#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Color__Array.h>

namespace app::classes::Frameworks::Shader_DefaultTextures {
    IL2CPP_REGISTER_METHOD(0x01644960, app::Texture*, get_Transparent, ())
    IL2CPP_REGISTER_METHOD(0x01644C70, app::Color__Array*, get_TransparentColorArray128, ())
} // namespace app::classes::Frameworks::Shader_DefaultTextures
