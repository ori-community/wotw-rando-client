#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::CullingCategoryManager_1_PointLightMaskModifier_ {
    IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (app::CullingCategoryManager_1_PointLightMaskModifier_ * this_ptr, app::Renderer * renderer, app::PointLightMaskModifier * item, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHODINFO(0x0475FBC0, CullingCategoryManager_1_PointLightMaskModifier__Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (app::CullingCategoryManager_1_PointLightMaskModifier_ * this_ptr, app::Renderer * renderer, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHODINFO(0x04707988, CullingCategoryManager_1_PointLightMaskModifier__Unregister__MethodInfo)
}
