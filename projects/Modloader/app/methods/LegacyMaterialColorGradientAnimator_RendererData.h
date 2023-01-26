#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator_RendererData__Boxed.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::LegacyMaterialColorGradientAnimator_RendererData {
    IL2CPP_REGISTER_METHOD(0x0011BFB0, void, ctor, (app::LegacyMaterialColorGradientAnimator_RendererData__Boxed * this_ptr, app::Color original_value, app::Renderer* renderer))
}
