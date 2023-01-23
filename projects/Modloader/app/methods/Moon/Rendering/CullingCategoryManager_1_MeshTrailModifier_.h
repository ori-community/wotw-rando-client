#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CullingCategoryManager_1_MeshTrailModifier_.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/MeshTrailModifier.h>
#include <Modloader/app/structs/Component_1.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_MeshTrailModifier_ {
    IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (app::CullingCategoryManager_1_MeshTrailModifier_ * this_ptr, app::Renderer* renderer, app::MeshTrailModifier* item, app::Component_1* log_context))
    IL2CPP_REGISTER_METHODINFO(0x04736DC8, CullingCategoryManager_1_MeshTrailModifier__Register__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (app::CullingCategoryManager_1_MeshTrailModifier_ * this_ptr, app::Renderer* renderer, app::Component_1* log_context))
    IL2CPP_REGISTER_METHODINFO(0x047192E8, CullingCategoryManager_1_MeshTrailModifier__Unregister__MethodInfo)
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_MeshTrailModifier_
