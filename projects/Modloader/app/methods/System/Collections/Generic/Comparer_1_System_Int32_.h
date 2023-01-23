#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_System_Int32_.h>
#include <Modloader/app/structs/Comparison_1_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Int32_*, get_Default, ())
    IL2CPP_REGISTER_METHODINFO(0x0472EDF0, Comparer_1_System_Int32__get_Default__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C0670, app::Comparer_1_System_Int32_*, Create, (app::Comparison_1_Int32_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04780F70, Comparer_1_System_Int32__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C0870, app::Comparer_1_System_Int32_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028C0E40, int32_t, IComparer_Compare, (app::Comparer_1_System_Int32_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Int32_
