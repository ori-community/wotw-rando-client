#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::ScriptableRenderContextExtensions {
    IL2CPP_REGISTER_METHOD(0x00EB5D10, void, ExecuteCommandBuffer, (app::ScriptableRenderContext ctx, app::CommandBuffer* buffer, bool copy))
}
