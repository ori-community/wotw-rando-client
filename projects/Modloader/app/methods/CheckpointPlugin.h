#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CheckpointPlugin.h>
#include <Modloader/app/structs/Recorder_1.h>

namespace app::classes::CheckpointPlugin {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, OnGameLoad, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, app::CheckpointPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, app::CheckpointPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x0131FD30, void, Exit, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131FDD0, void, Awake, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131FE90, void, OnDestroy, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0131FF50, void, PerformLoadFromCurrentFrame, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01320260, void, RestoreCheckpointPart1, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013204A0, void, RestoreCheckpointPart2, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01320710, void, OnFinishedLoading, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01320930, void, PerformLoad, app::CheckpointPlugin* this_ptr, int32_t keyframe)
    IL2CPP_REGISTER_METHOD(0x01320AA0, void, PerformLoadFromFrame, app::CheckpointPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x01320B70, void, ApplyPreviousInput, app::CheckpointPlugin* this_ptr, int32_t frame, app::Recorder_1* recorder)
    IL2CPP_REGISTER_METHOD(0x01320DF0, void, MakeCheckpointAtEndOfFrame, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01321070, void, MakeCheckpoint, app::CheckpointPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01321370, void, ctor, app::CheckpointPlugin* this_ptr)
} // namespace app::classes::CheckpointPlugin
