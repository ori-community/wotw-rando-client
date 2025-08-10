#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/RaycastHit.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UnityEngine_RaycastHit_* this_ptr,
        app::Comparison_1_UnityEngine_RaycastHit_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x0162A910, int32_t, Compare, app::ComparisonComparer_1_UnityEngine_RaycastHit_* this_ptr, app::RaycastHit x, app::RaycastHit y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_RaycastHit_
