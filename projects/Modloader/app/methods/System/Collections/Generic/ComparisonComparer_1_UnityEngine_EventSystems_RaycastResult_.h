#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/RaycastResult.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UnityEngine_EventSystems_RaycastResult_* this_ptr,
        app::Comparison_1_UnityEngine_EventSystems_RaycastResult_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A690,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UnityEngine_EventSystems_RaycastResult_* this_ptr,
        app::RaycastResult x,
        app::RaycastResult y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_EventSystems_RaycastResult_
