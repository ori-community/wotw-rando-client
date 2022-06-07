#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Frameworks::Shader_DefaultTextures {
    IL2CPP_REGISTER_METHOD(0x01644960, app::Texture *, get_Transparent, ())
    IL2CPP_REGISTER_METHOD(0x01644C70, app::Color__Array *, get_TransparentColorArray128, ())
}
