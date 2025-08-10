#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Color_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_UnityEngine_Color_* this_ptr, app::Comparison_1_UnityEngine_Color_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, app::ComparisonComparer_1_UnityEngine_Color_* this_ptr, app::Color x, app::Color y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Color_
