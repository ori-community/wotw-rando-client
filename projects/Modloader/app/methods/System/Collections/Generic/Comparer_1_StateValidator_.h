#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_StateValidator_.h>
#include <Modloader/app/structs/Comparison_1_StateValidator_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_StateValidator_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_StateValidator_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02829350, app::Comparer_1_StateValidator_*, Create, (app::Comparison_1_StateValidator_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0475C8D8, Comparer_1_StateValidator__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02829550, app::Comparer_1_StateValidator_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_StateValidator_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_StateValidator_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_StateValidator_
