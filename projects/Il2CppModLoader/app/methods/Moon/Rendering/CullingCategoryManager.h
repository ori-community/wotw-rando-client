#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager {
    IL2CPP_REGISTER_METHOD(0x00C53A00, void, ctor, (app::CullingCategoryManager * this_ptr, app::CullingCategory__Enum mask, bool needs_list, bool per_slice))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RendererCullingCategoryParameters, ICullingCategoryManager_get_Parameters, (app::CullingCategoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::RendererCullingCategoryResults, get_lastResults, (app::CullingCategoryManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_lastResults, (app::CullingCategoryManager * this_ptr, app::RendererCullingCategoryResults value))
    IL2CPP_REGISTER_METHOD(0x00C53A30, void, ICullingCategoryManager_OnPreCull, (app::CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view))
    IL2CPP_REGISTER_METHOD(0x00C53A50, void, OnPreCull, (app::CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view))
    IL2CPP_REGISTER_METHOD(0x00C53A70, void, ICullingCategoryManager_OnResultsReady, (app::CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResultsReady, (app::CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHOD(0x00C53AA0, void, ICullingCategoryManager_OnPostCull, (app::CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHOD(0x00C53AD0, void, OnPostCull, (app::CullingCategoryManager * this_ptr, app::MoonRenderPipelineView* view, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHOD(0x00C53AE0, bool, SliceHasContent, (app::CullingCategoryManager * this_ptr, int32_t slice_index))
    IL2CPP_REGISTER_METHOD(0x00C53B30, int32_t, Count, (app::CullingCategoryManager * this_ptr, int32_t slice_index))
} // namespace app::classes::Moon::Rendering::CullingCategoryManager
