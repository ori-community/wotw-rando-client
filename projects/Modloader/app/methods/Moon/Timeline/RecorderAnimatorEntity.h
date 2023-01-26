#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerable_1_SceneMetaData_.h>
#include <Modloader/app/structs/RecorderAnimatorEntity.h>
#include <Modloader/app/structs/RecorderData.h>
#include <Modloader/app/structs/RecorderFrame.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Timeline::RecorderAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077CB40, app::RecorderData*, get_RecorderData, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077CD60, void, OnStartPlayback, (app::RecorderAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0077CE50, void, OnStopPlayback, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077CF00, void, StartRecording, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077D1D0, void, LoadScenes, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077D790, app::IEnumerable_1_SceneMetaData_*, GetSceneListFromAsset, (app::RecorderData * data))
    IL2CPP_REGISTER_METHOD(0x0077D8E0, void, OnUpdateEntity, (app::RecorderAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0077DC00, void, LoadAllScenes, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077E0C0, void, SceneEnabled, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077E170, void, WaitForShaderRuntimeUpdate, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077E2E0, void, SampleValue, (app::RecorderAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0077E420, app::RecorderFrame*, GetFrame, (app::RecorderAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0077E5F0, app::Vector3, GetCharacterPositionFromFirstFrame, (app::RecorderAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077E810, bool, HasFinished, (app::RecorderAnimatorEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x0077E830, void, ctor, (app::RecorderAnimatorEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::RecorderAnimatorEntity
