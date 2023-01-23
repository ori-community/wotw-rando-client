#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyMaterialColorAnimator_RendererData.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::LegacyMaterialColorAnimator_RendererData {
    IL2CPP_REGISTER_METHOD(0x00A2CA80, void, ctor, (app::LegacyMaterialColorAnimator_RendererData * this_ptr, app::Color original_value, app::Renderer* renderer))
}
