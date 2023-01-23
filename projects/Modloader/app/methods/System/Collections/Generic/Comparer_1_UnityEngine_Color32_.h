#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UnityEngine_Color32_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028D0630, app::Comparer_1_UnityEngine_Color32_*, Create, (app::Comparison_1_UnityEngine_Color32_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0473BB58, Comparer_1_UnityEngine_Color32__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028D0830, app::Comparer_1_UnityEngine_Color32_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028D0E00, int32_t, IComparer_Compare, (app::Comparer_1_UnityEngine_Color32_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_UnityEngine_Color32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_Color32_
