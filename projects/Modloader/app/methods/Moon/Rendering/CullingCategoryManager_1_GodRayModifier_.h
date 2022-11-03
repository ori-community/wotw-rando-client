#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_GodRayModifier_ {
    IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (app::CullingCategoryManager_1_GodRayModifier_ * this_ptr, app::Renderer* renderer, app::GodRayModifier* item, app::Component_1* log_context))
    IL2CPP_REGISTER_METHODINFO(0x0473D670, CullingCategoryManager_1_GodRayModifier__Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (app::CullingCategoryManager_1_GodRayModifier_ * this_ptr, app::Renderer* renderer, app::Component_1* log_context))
    IL2CPP_REGISTER_METHODINFO(0x04783870, CullingCategoryManager_1_GodRayModifier__Unregister__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904370, void, ctor, (app::CullingCategoryManager_1_GodRayModifier_ * this_ptr, app::CullingCategory__Enum mask, bool per_slice))
    IL2CPP_REGISTER_METHODINFO(0x04712B50, CullingCategoryManager_1_GodRayModifier___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904830, app::CullingCategoryManager_1_T_Enumerator_GodRayModifier_, Resolve, (app::CullingCategoryManager_1_GodRayModifier_ * this_ptr, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHODINFO(0x04779EC8, CullingCategoryManager_1_GodRayModifier__Resolve__MethodInfo)
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_GodRayModifier_
