#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_UInt64_.h>
#include <Modloader/app/structs/Comparison_1_UInt64_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_UInt64_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028C6220, app::Comparer_1_System_UInt64_*, Create, (app::Comparison_1_UInt64_ * comparison))
    IL2CPP_REGISTER_METHOD(0x028C6420, app::Comparer_1_System_UInt64_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028C1F50, int32_t, IComparer_Compare, (app::Comparer_1_System_UInt64_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_UInt64_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_UInt64_
