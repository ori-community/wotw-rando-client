#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UnityEngine_UIVertex_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028D7DE0, app::Comparer_1_UnityEngine_UIVertex_*, Create, (app::Comparison_1_UnityEngine_UIVertex_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0472ECA0, Comparer_1_UnityEngine_UIVertex__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028D7FE0, app::Comparer_1_UnityEngine_UIVertex_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028D85B0, int32_t, IComparer_Compare, (app::Comparer_1_UnityEngine_UIVertex_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_UnityEngine_UIVertex_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_UnityEngine_UIVertex_
