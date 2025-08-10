#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD1820,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr,
        app::ScalableAnimationPlayer_ScenarioPlaybackData x,
        app::ScalableAnimationPlayer_ScenarioPlaybackData y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD18D0,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr,
        app::ScalableAnimationPlayer_ScenarioPlaybackData obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD1930,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr,
        app::ScalableAnimationPlayer_ScenarioPlaybackData__Array* array,
        app::ScalableAnimationPlayer_ScenarioPlaybackData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD1AB0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr,
        app::ScalableAnimationPlayer_ScenarioPlaybackData__Array* array,
        app::ScalableAnimationPlayer_ScenarioPlaybackData value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CC3E60,
        bool,
        Equals_2,
        app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_
