#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Color32_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_UnityEngine_Color32_* this_ptr, app::Comparison_1_UnityEngine_Color32_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A4F0, int32_t, Compare, app::ComparisonComparer_1_UnityEngine_Color32_* this_ptr, app::Color32 x, app::Color32 y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Color32_
