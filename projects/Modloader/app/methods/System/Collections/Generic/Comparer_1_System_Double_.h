#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Double_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028BED80, app::Comparer_1_System_Double_*, Create, (app::Comparison_1_Double_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04712CE0, Comparer_1_System_Double__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028BEF80, app::Comparer_1_System_Double_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028BF550, int32_t, IComparer_Compare, (app::Comparer_1_System_Double_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_Double_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Double_
