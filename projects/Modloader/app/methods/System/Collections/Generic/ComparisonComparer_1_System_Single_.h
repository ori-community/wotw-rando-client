#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComparisonComparer_1_System_Single_.h>
#include <Modloader/app/structs/Comparison_1_Single_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_System_Single_ * this_ptr, app::Comparison_1_Single_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A660, int32_t, Compare, (app::ComparisonComparer_1_System_Single_ * this_ptr, float x, float y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Single_
