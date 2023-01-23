#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>

namespace app::classes::Moon::Rendering::Noise {
    IL2CPP_REGISTER_METHOD(0x00EB0EF0, void, Setup, (app::MoonRenderContext * ctx, app::MoonRenderPipelineAsset* owner))
}
