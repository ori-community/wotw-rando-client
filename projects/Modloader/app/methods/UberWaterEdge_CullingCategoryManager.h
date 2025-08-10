#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#include <Modloader/app/structs/UberWaterEdge_CullingCategoryManager.h>

namespace app::classes::UberWaterEdge_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x0129EDE0, void, ctor, app::UberWaterEdge_CullingCategoryManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0129EE70,
        void,
        OnPostCull,
        app::UberWaterEdge_CullingCategoryManager* this_ptr,
        app::MoonRenderPipelineView* view,
        app::RendererCullingCategoryResults results
    )
} // namespace app::classes::UberWaterEdge_CullingCategoryManager
