#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Boolean_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02829B20, app::Comparer_1_System_Boolean_*, Create, (app::Comparison_1_Boolean_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0471CA70, Comparer_1_System_Boolean__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02829D20, app::Comparer_1_System_Boolean_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0282A2F0, int32_t, IComparer_Compare, (app::Comparer_1_System_Boolean_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Boolean_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Boolean_
