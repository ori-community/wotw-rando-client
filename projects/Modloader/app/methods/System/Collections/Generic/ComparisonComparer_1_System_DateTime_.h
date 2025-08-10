#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_DateTime_.h>
#include <Modloader/app/structs/Comparison_1_DateTime_.h>
#include <Modloader/app/structs/DateTime.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_System_DateTime_* this_ptr, app::Comparison_1_DateTime_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A4F0, int32_t, Compare, app::ComparisonComparer_1_System_DateTime_* this_ptr, app::DateTime x, app::DateTime y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_DateTime_
