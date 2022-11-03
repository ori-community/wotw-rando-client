#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02904890, app::String*, get_typeName, ())
    IL2CPP_REGISTER_METHOD(0x02904370, void, ctor, (app::CullingCategoryManager_1_System_Object_ * this_ptr, app::CullingCategory__Enum mask, bool per_slice))
    IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (app::CullingCategoryManager_1_System_Object_ * this_ptr, app::Renderer* renderer, app::Object* item, app::Component_1* log_context))
    IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (app::CullingCategoryManager_1_System_Object_ * this_ptr, app::Renderer* renderer, app::Component_1* log_context))
    IL2CPP_REGISTER_METHOD(0x02904830, app::CullingCategoryManager_1_T_Enumerator_System_Object_, Resolve, (app::CullingCategoryManager_1_System_Object_ * this_ptr, app::RendererCullingCategoryResults results))
    IL2CPP_REGISTER_METHOD(0x02904980, void, LogRegistrationError, (app::String * error, app::Component_1* log_context))
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_System_Object_
