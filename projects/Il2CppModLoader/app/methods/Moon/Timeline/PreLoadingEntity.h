#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::PreLoadingEntity {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::SceneMetaData*, get_SceneMetaData, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_SceneMetaData, (app::PreLoadingEntity * this_ptr, app::SceneMetaData* value))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, ShouldOverrideSceneMetaData, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077B2F0, void, OnStartPlayback, (app::PreLoadingEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0077B810, void, OnStopPlayback, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077B8F0, void, OnUpdateEntity, (app::PreLoadingEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0077B910, void, SynchronizeData, (app::PreLoadingEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x0077BB90, void, UpdatePreloading, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077BE10, void, OnDisable, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077BED0, void, FixedUpdate, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077BFB0, void, OnSceneEnabled, (app::PreLoadingEntity * this_ptr, bool success))
    IL2CPP_REGISTER_METHODINFO(0x0471B468, PreLoadingEntity_OnSceneEnabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0077BFC0, bool, get_HasFinishedLoadingAndEnabling, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077C0D0, bool, get_SceneLoadingAborted, (app::PreLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077C270, bool, HasFinished, (app::PreLoadingEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x0077C280, void, ctor, (app::PreLoadingEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::PreLoadingEntity
