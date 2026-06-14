#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/ScriptableRenderContext.h>

namespace app::classes::Moon::Rendering::ScriptableRenderContextExtensions {
    IL2CPP_REGISTER_METHOD(0x00EB5D10, void, ExecuteCommandBuffer, app::ScriptableRenderContext ctx, app::CommandBuffer* buffer, bool copy)
}
