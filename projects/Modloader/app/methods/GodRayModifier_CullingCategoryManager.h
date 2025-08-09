#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GodRayModifier_CullingCategoryManager.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/RendererCullingCategoryResults.h>

namespace app::classes::GodRayModifier_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x00800E60, void, ctor, app::GodRayModifier_CullingCategoryManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00800FC0,
        void,
        OnPostCull,
        app::GodRayModifier_CullingCategoryManager* this_ptr,
        app::MoonRenderPipelineView* view,
        app::RendererCullingCategoryResults results
    )
} // namespace app::classes::GodRayModifier_CullingCategoryManager
