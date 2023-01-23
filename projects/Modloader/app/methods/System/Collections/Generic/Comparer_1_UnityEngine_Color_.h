#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UnityEngine_Color_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028D0F80, app::Comparer_1_UnityEngine_Color_*, Create, (app::Comparison_1_UnityEngine_Color_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047797E8, Comparer_1_UnityEngine_Color__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028D1180, app::Comparer_1_UnityEngine_Color_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_UnityEngine_Color_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_UnityEngine_Color_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_Color_
