#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Guid_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028BF6D0, app::Comparer_1_System_Guid_*, Create, (app::Comparison_1_Guid_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0472BF10, Comparer_1_System_Guid__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028BF8D0, app::Comparer_1_System_Guid_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_System_Guid_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Guid_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Guid_
