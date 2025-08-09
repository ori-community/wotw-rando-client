#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_GodRayModifier_.h>
#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_GodRayModifier___Boxed.h>
#include <Modloader/app/structs/GodRayModifier.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_T__Enumerator_GodRayModifier_ {
    IL2CPP_REGISTER_METHOD(
        0x00216120,
        app::CullingCategoryManager_1_T_Enumerator_GodRayModifier_,
        GetEnumerator,
        app::CullingCategoryManager_1_T_Enumerator_GodRayModifier___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00107C60, app::GodRayModifier*, get_Current, app::CullingCategoryManager_1_T_Enumerator_GodRayModifier___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002160A0, bool, MoveNext, app::CullingCategoryManager_1_T_Enumerator_GodRayModifier___Boxed* this_ptr)
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_T__Enumerator_GodRayModifier_
