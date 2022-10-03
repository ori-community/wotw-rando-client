#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::CommandBufferExtensions {
    IL2CPP_REGISTER_METHOD(0x00C53860, void, SetShaderKeyword, (app::CommandBuffer * cmd, int32_t keyword, bool enabled))
    IL2CPP_REGISTER_METHOD(0x00C53930, void, SetKeyword, (app::Material * mat, int32_t keyword, bool enabled))
} // namespace app::classes::Moon::Rendering::CommandBufferExtensions
