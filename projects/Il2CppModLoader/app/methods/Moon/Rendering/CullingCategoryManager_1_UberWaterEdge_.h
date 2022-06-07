#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::CullingCategoryManager_1_UberWaterEdge_ {
    IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (app::CullingCategoryManager_1_UberWaterEdge_ * this_ptr, app::Renderer * renderer, app::UberWaterEdge * item, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHODINFO(0x0474FED8, CullingCategoryManager_1_UberWaterEdge__Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (app::CullingCategoryManager_1_UberWaterEdge_ * this_ptr, app::Renderer * renderer, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHODINFO(0x04767458, CullingCategoryManager_1_UberWaterEdge__Unregister__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904370, void, ctor, (app::CullingCategoryManager_1_UberWaterEdge_ * this_ptr, app::CullingCategory__Enum mask, bool per_slice))
    IL2CPP_REGISTER_METHODINFO(0x047996E0, CullingCategoryManager_1_UberWaterEdge___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904830, app::CullingCategoryManager_1_T_Enumerator_UberWaterEdge_, Resolve, (app::CullingCategoryManager_1_UberWaterEdge_ * this_ptr, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHODINFO(0x04720A10, CullingCategoryManager_1_UberWaterEdge__Resolve__MethodInfo)
}
