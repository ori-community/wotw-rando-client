#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuildData.h>
#include <Modloader/app/structs/CharacterData.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IRecorderPlugin.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RecorderAsset.h>
#include <Modloader/app/structs/RecorderFrame.h>
#include <Modloader/app/structs/Recorder_1.h>
#include <Modloader/app/structs/Recorder_RecorderState__Enum.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Recorder {
    IL2CPP_REGISTER_METHOD(0x008E9240, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x008E9B20, bool, get_IsPlaying, )
    IL2CPP_REGISTER_METHOD(0x008E9C20, bool, get_IsRecordering, )
    IL2CPP_REGISTER_METHOD(0x008E9D20, float, get_PositionTolerance, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E9D40, float, get_RotationTolerance, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E9D60, app::RecorderFrame*, get_CurrentFrame, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E9D90, bool, get_Is4K, )
    IL2CPP_REGISTER_METHOD(0x008E9E30, void, set_Is4K, bool value)
    IL2CPP_REGISTER_METHOD(0x008E9EE0, app::Recorder_RecorderState__Enum, get_State, )
    IL2CPP_REGISTER_METHOD(0x008E9F80, void, set_State, app::Recorder_RecorderState__Enum value)
    IL2CPP_REGISTER_METHOD(0x008EA030, void, AddReplayToQueue, app::String* replay_path, int32_t index)
    IL2CPP_REGISTER_METHOD(0x008EA160, bool, IsReplayQueueEmpty, )
    IL2CPP_REGISTER_METHOD(0x008EA210, app::String*, GetReplayFromQueue, )
    IL2CPP_REGISTER_METHOD(0x008EA3B0, bool, OnPerformLoad, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EA4D0, void, OnPerformSave, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EA560, void, OnSceneRootActivatedScene, app::Recorder_1* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x008EA660, void, OnRestoreCheckpoint, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EA760, void, Reset, app::Recorder_1* this_ptr, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x008EA990, void, InitRecording, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EADB0, void, OnGameReset, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EB1F0, void, DestroyComponent, app::Recorder_1* this_ptr, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x008EB2C0, void, AddRecordingComponents, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EB650, void, AddPlaybackComponents, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EB9F0, void, DestoryPlaybackComponents, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EBDE0, void, Awake, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EBEA0, void, SetDataFromAsset, app::Recorder_1* this_ptr, app::RecorderAsset* asset)
    IL2CPP_REGISTER_METHOD(0x008EBEC0, void, StartPlayback, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EC160, app::IEnumerator*, ResetRecorderAndComponents, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EC2B0, void, SetupRecorderAccordingToState, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EC500, void, SetFixedUpdateIndex, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EC6A0, void, FinishFrame, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EC6D0, void, FixedUpdate, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008ECE90, void, RegisterPlugin, app::Recorder_1* this_ptr, app::IRecorderPlugin* plugin)
    IL2CPP_REGISTER_METHOD(0x008ECF30, void, DeregisterPlugin, app::Recorder_1* this_ptr, app::IRecorderPlugin* plugin)
    IL2CPP_REGISTER_METHOD(0x008ECFD0, void, OnDestroy, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008ED420, void, OnApplicationQuit, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008ED500, void, AssertFoldersExist, )
    IL2CPP_REGISTER_METHOD(
        0x008ED6A0,
        void,
        HandleLog,
        app::Recorder_1* this_ptr,
        app::String* log_string,
        app::String* stack_trace,
        app::LogType__Enum log_type
    )
    IL2CPP_REGISTER_METHOD(0x008ED880, void, Exit, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EDA80, void, ctor, app::Recorder_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008EDBF0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x016AA670, app::Object*, GetPlugin, )
    IL2CPP_REGISTER_METHOD(0x016AA2E0, app::Object*, GetFrameData_1, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x016AA2E0, app::CharacterData*, GetFrameData_2, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x016AA2E0, app::BuildData*, GetFrameData_3, int32_t frame)
} // namespace app::classes::Recorder
