#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_Decimal_.h>
#include <Modloader/app/structs/Comparison_1_Decimal_.h>
#include <Modloader/app/structs/Decimal.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_System_Decimal_* this_ptr, app::Comparison_1_Decimal_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, app::ComparisonComparer_1_System_Decimal_* this_ptr, app::Decimal x, app::Decimal y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Decimal_
