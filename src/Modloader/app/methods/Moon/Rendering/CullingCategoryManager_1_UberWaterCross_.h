#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/CullingCategoryManager_1_T_Enumerator_UberWaterCross_.h>
#include <Modloader/app/structs/CullingCategoryManager_1_UberWaterCross_.h>
#include <Modloader/app/structs/CullingCategory__Enum.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#include <Modloader/app/structs/UberWaterCross.h>

namespace app::classes::Moon::Rendering::CullingCategoryManager_1_UberWaterCross_ {
    IL2CPP_REGISTER_METHOD(
        0x029044B0,
        void,
        Register,
        app::CullingCategoryManager_1_UberWaterCross_* this_ptr,
        app::Renderer* renderer,
        app::UberWaterCross* item,
        app::Component_1* log_context
    )
    IL2CPP_REGISTER_METHOD(
        0x02904670,
        void,
        Unregister,
        app::CullingCategoryManager_1_UberWaterCross_* this_ptr,
        app::Renderer* renderer,
        app::Component_1* log_context
    )
    IL2CPP_REGISTER_METHOD(0x02904370, void, ctor, app::CullingCategoryManager_1_UberWaterCross_* this_ptr, app::CullingCategory__Enum mask, bool per_slice)
    IL2CPP_REGISTER_METHOD(
        0x02904830,
        app::CullingCategoryManager_1_T_Enumerator_UberWaterCross_,
        Resolve,
        app::CullingCategoryManager_1_UberWaterCross_* this_ptr,
        app::RendererCullingCategoryResults results
    )
} // namespace app::classes::Moon::Rendering::CullingCategoryManager_1_UberWaterCross_
