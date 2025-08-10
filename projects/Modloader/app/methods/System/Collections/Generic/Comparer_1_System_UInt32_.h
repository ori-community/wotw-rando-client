#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_UInt32_.h>
#include <Modloader/app/structs/Comparison_1_UInt32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_UInt32_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x028C5A50, app::Comparer_1_System_UInt32_*, Create, app::Comparison_1_UInt32_* comparison)
    IL2CPP_REGISTER_METHOD(0x028C5C50, app::Comparer_1_System_UInt32_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x028C0E40, int32_t, IComparer_Compare, app::Comparer_1_System_UInt32_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_System_UInt32_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_UInt32_
