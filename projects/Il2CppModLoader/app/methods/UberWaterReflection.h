#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberWaterReflection {
    IL2CPP_REGISTER_METHOD(0x012A1000, app::UberWaterReflectionView*, GetView, (app::MoonRenderPipelineView * view))
    IL2CPP_REGISTER_METHOD(0x012A1110, void, PrepareDrawRenderers, (app::MoonRenderPipelineView * view))
    IL2CPP_REGISTER_METHOD(0x012A11C0, void, RenderAllVisible, (app::MoonRenderPipelineView * view, float current_d_r_s_scale, float current_d_r_s_scale_y))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberWaterReflection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012A1290, void, cctor, ())
} // namespace app::classes::UberWaterReflection
