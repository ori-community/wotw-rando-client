#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Comparison_1_UnityEngine_Quaternion_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion x, app::Quaternion y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Quaternion_
