#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialFloatAnimator_RendererData.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::LegacyMaterialFloatAnimator_RendererData {
    IL2CPP_REGISTER_METHOD(0x0071BBD0, void, ctor, app::LegacyMaterialFloatAnimator_RendererData* this_ptr, float original_value, app::Renderer* renderer)
}
