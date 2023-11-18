#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Comparison_1_Int32_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_System_Int32_ * this_ptr, app::Comparison_1_Int32_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A4F0, int32_t, Compare, (app::ComparisonComparer_1_System_Int32_ * this_ptr, int32_t x, int32_t y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Int32_
