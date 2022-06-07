#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberWaterCross_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x0129E3F0, void, ctor, (app::UberWaterCross_CullingCategoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129E480, void, OnPostCull, (app::UberWaterCross_CullingCategoryManager * this_ptr, app::MoonRenderPipelineView * view, app::RendererCullingCategoryResults results))
}
