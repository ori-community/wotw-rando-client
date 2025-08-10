#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/Comparison_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_CameraTargetSettings_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_CameraTargetSettings_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x0280DC80, app::Comparer_1_Moon_CameraTargetSettings_*, Create, app::Comparison_1_Moon_CameraTargetSettings_* comparison)
    IL2CPP_REGISTER_METHOD(0x0280DE80, app::Comparer_1_Moon_CameraTargetSettings_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x0280A070, int32_t, IComparer_Compare, app::Comparer_1_Moon_CameraTargetSettings_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_Moon_CameraTargetSettings_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_CameraTargetSettings_
