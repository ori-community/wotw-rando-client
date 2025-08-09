#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_UnityEngine_Vector3_* this_ptr, app::Comparison_1_UnityEngine_Vector3_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A2F0, int32_t, Compare, app::ComparisonComparer_1_UnityEngine_Vector3_* this_ptr, app::Vector3 x, app::Vector3 y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Vector3_
