#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#include <Modloader/app/structs/UberWaterTop_CullingCategoryManager.h>

namespace app::classes::UberWaterTop_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x012AAE00, void, ctor, app::UberWaterTop_CullingCategoryManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012AAE90,
        void,
        OnResultsReady,
        app::UberWaterTop_CullingCategoryManager* this_ptr,
        app::MoonRenderPipelineView* view,
        app::RendererCullingCategoryResults results
    )
} // namespace app::classes::UberWaterTop_CullingCategoryManager
