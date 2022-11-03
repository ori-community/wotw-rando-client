#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberWaterEdge_CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x0129EDE0, void, ctor, (app::UberWaterEdge_CullingCategoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0129EE70, void, OnPostCull, (app::UberWaterEdge_CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view, app::RendererCullingCategoryResults results))
} // namespace app::classes::UberWaterEdge_CullingCategoryManager
