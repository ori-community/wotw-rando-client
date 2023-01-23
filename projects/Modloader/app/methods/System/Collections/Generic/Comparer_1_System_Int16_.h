#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_System_Int16_.h>
#include <Modloader/app/structs/Comparison_1_Int16_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Int16_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Int16_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028BFEA0, app::Comparer_1_System_Int16_*, Create, (app::Comparison_1_Int16_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04739768, Comparer_1_System_Int16__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C00A0, app::Comparer_1_System_Int16_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0282BBE0, int32_t, IComparer_Compare, (app::Comparer_1_System_Int16_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Int16_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Int16_
