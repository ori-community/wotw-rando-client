#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_Decimal_.h>
#include <Modloader/app/structs/Comparison_1_Decimal_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Decimal_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028BDDE0, app::Comparer_1_System_Decimal_*, Create, (app::Comparison_1_Decimal_ * comparison))
    IL2CPP_REGISTER_METHOD(0x028BDFE0, app::Comparer_1_System_Decimal_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_System_Decimal_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Decimal_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Decimal_
