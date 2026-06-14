#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#include <Modloader/app/structs/UberWaterCross_CullingCategoryManager.h>

namespace app::classes::UberWaterCross_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x0129E3F0, void, ctor, app::UberWaterCross_CullingCategoryManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0129E480,
        void,
        OnPostCull,
        app::UberWaterCross_CullingCategoryManager* this_ptr,
        app::MoonRenderPipelineView* view,
        app::RendererCullingCategoryResults results
    )
} // namespace app::classes::UberWaterCross_CullingCategoryManager
