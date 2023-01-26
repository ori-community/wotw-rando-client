#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/UIVertex.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_UnityEngine_UIVertex_ * this_ptr, app::Comparison_1_UnityEngine_UIVertex_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A9A0, int32_t, Compare, (app::ComparisonComparer_1_UnityEngine_UIVertex_ * this_ptr, app::UIVertex x, app::UIVertex y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_UIVertex_
