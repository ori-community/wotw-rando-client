#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_Boolean_.h>
#include <Modloader/app/structs/Comparison_1_Boolean_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_System_Boolean_ * this_ptr, app::Comparison_1_Boolean_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A4F0, int32_t, Compare, (app::ComparisonComparer_1_System_Boolean_ * this_ptr, bool x, bool y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Boolean_
