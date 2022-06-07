#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GodRayModifier_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x00800E60, void, ctor, (app::GodRayModifier_CullingCategoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800FC0, void, OnPostCull, (app::GodRayModifier_CullingCategoryManager * this_ptr, app::MoonRenderPipelineView * view, app::RendererCullingCategoryResults results))
}
