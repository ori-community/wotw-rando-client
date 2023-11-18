#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_UnityEngine_Vector4_ * this_ptr, app::Comparison_1_UnityEngine_Vector4_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_UnityEngine_Vector4_ * this_ptr, app::Vector4 x, app::Vector4 y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UnityEngine_Vector4_
