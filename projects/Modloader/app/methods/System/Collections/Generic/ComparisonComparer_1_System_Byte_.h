#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_Byte_.h>
#include <Modloader/app/structs/Comparison_1_Byte_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, app::ComparisonComparer_1_System_Byte_* this_ptr, app::Comparison_1_Byte_* comparison)
    IL2CPP_REGISTER_METHOD(0x0162A4F0, int32_t, Compare, app::ComparisonComparer_1_System_Byte_* this_ptr, uint8_t x, uint8_t y)
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_Byte_
