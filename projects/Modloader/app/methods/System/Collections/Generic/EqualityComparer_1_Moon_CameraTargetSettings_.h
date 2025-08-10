#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraTargetSettings.h>
#include <Modloader/app/structs/CameraTargetSettings__Array.h>
#include <Modloader/app/structs/EqualityComparer_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_CameraTargetSettings_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Moon_CameraTargetSettings_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02CDD080, app::EqualityComparer_1_Moon_CameraTargetSettings_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B5B200,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_Moon_CameraTargetSettings_* this_ptr,
        app::CameraTargetSettings__Array* array,
        app::CameraTargetSettings value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B2F0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_Moon_CameraTargetSettings_* this_ptr,
        app::CameraTargetSettings__Array* array,
        app::CameraTargetSettings value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02B5B3E0, int32_t, IEqualityComparer_GetHashCode, app::EqualityComparer_1_Moon_CameraTargetSettings_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02B5B4E0,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_Moon_CameraTargetSettings_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_Moon_CameraTargetSettings_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_CameraTargetSettings_
