#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_UberWaterEdge_.h>
#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_UberWaterEdge___Boxed.h>
#include <Modloader/app/structs/UberWaterEdge.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_T__Enumerator_UberWaterEdge_ {
    IL2CPP_REGISTER_METHOD(
        0x00216120,
        app::CullingCategoryManager_1_T_Enumerator_UberWaterEdge_,
        GetEnumerator,
        app::CullingCategoryManager_1_T_Enumerator_UberWaterEdge___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00107C60, app::UberWaterEdge*, get_Current, app::CullingCategoryManager_1_T_Enumerator_UberWaterEdge___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002160A0, bool, MoveNext, app::CullingCategoryManager_1_T_Enumerator_UberWaterEdge___Boxed* this_ptr)
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_T__Enumerator_UberWaterEdge_
