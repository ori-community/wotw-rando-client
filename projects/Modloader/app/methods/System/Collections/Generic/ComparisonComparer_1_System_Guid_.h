#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_Guid_.h>
#include <Modloader/app/structs/Comparison_1_Guid_.h>
#include <Modloader/app/structs/Guid.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_System_Guid_ * this_ptr, app::Comparison_1_Guid_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_System_Guid_ * this_ptr, app::Guid x, app::Guid y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Guid_
