#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/Comparison_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_GameplayCameraTargetEntry_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_GameplayCameraTargetEntry_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C9CEB0, app::Comparer_1_GameplayCameraTargetEntry_*, Create, (app::Comparison_1_GameplayCameraTargetEntry_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0470B830, Comparer_1_GameplayCameraTargetEntry__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C9D0B0, app::Comparer_1_GameplayCameraTargetEntry_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_GameplayCameraTargetEntry_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_GameplayCameraTargetEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_GameplayCameraTargetEntry_
