#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_UnityEngine_Vector2_* this_ptr, app::Comparison_1_UnityEngine_Vector2_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A0A0, int32_t, Compare, app::ComparisonComparer_1_UnityEngine_Vector2_* this_ptr, app::Vector2 x, app::Vector2 y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Vector2_
