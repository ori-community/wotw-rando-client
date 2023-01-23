#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_System_Byte_.h>
#include <Modloader/app/structs/Comparison_1_Byte_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Byte_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0282A470, app::Comparer_1_System_Byte_*, Create, (app::Comparison_1_Byte_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047728A8, Comparer_1_System_Byte__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0282A670, app::Comparer_1_System_Byte_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0282A2F0, int32_t, IComparer_Compare, (app::Comparer_1_System_Byte_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Byte_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Byte_
