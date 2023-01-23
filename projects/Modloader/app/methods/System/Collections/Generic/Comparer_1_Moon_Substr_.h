#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_Moon_Substr_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Substr_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Substr_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_Substr_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02812C40, app::Comparer_1_Moon_Substr_*, Create, (app::Comparison_1_Moon_Substr_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047494F8, Comparer_1_Moon_Substr__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02812E40, app::Comparer_1_Moon_Substr_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02813410, int32_t, IComparer_Compare, (app::Comparer_1_Moon_Substr_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_Moon_Substr_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Substr_
