#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Comparer_1_System_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_DateTimeOffset_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028BD610, app::Comparer_1_System_DateTimeOffset_ *, Create, (app::Comparison_1_DateTimeOffset_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0477C340, Comparer_1_System_DateTimeOffset__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028BD810, app::Comparer_1_System_DateTimeOffset_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_System_DateTimeOffset_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_DateTimeOffset_ * this_ptr))
}
