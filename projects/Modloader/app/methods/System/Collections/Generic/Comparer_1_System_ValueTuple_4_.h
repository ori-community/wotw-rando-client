#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_ValueTuple_4_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_ValueTuple_4_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_ValueTuple_4_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028C8160, app::Comparer_1_System_ValueTuple_4_*, Create, (app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_ * comparison))
    IL2CPP_REGISTER_METHOD(0x028C8360, app::Comparer_1_System_ValueTuple_4_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_System_ValueTuple_4_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_ValueTuple_4_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_ValueTuple_4_
