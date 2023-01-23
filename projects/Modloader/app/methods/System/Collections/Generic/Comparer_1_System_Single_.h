#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_System_Single_.h>
#include <Modloader/app/structs/Comparison_1_Single_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Single_*, get_Default, ())
    IL2CPP_REGISTER_METHODINFO(0x0474BD80, Comparer_1_System_Single__get_Default__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C4160, app::Comparer_1_System_Single_*, Create, (app::Comparison_1_Single_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0472B768, Comparer_1_System_Single__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C4360, app::Comparer_1_System_Single_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028C4930, int32_t, IComparer_Compare, (app::Comparer_1_System_Single_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Single_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Single_
