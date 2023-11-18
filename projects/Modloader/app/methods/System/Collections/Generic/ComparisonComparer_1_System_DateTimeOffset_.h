#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_DateTimeOffset_.h>
#include <Modloader/app/structs/Comparison_1_DateTimeOffset_.h>
#include <Modloader/app/structs/DateTimeOffset.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_System_DateTimeOffset_ * this_ptr, app::Comparison_1_DateTimeOffset_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_System_DateTimeOffset_ * this_ptr, app::DateTimeOffset x, app::DateTimeOffset y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_DateTimeOffset_
