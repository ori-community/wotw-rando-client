#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Comparison_1_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_ActiveAnimationHandle_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0280CCE0, app::Comparer_1_Moon_ActiveAnimationHandle_*, Create, (app::Comparison_1_Moon_ActiveAnimationHandle_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047454A8, Comparer_1_Moon_ActiveAnimationHandle__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0280CEE0, app::Comparer_1_Moon_ActiveAnimationHandle_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_Moon_ActiveAnimationHandle_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_Moon_ActiveAnimationHandle_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_ActiveAnimationHandle_
