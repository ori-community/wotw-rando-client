#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::CullingCategoryManagerWithList_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02903EA0, void, ctor, (app::CullingCategoryManagerWithList_1_System_Object_ * this_ptr, app::CullingCategory__Enum mask, bool per_slice))
    IL2CPP_REGISTER_METHOD(0x02903FE0, void, OnPostCull, (app::CullingCategoryManagerWithList_1_System_Object_ * this_ptr, app::MoonRenderPipelineView * view, app::RendererCullingCategoryResults results))
}
