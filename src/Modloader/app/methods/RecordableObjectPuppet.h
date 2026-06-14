#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/IPuppetBase.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#include <Modloader/app/structs/RecordingLink.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RecordableObjectPuppet {
    IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_UniqueRecordingId, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736630, bool, get_IsRecording, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736650, void, OnInitializeLivePuppet, app::RecordableObjectPuppet* this_ptr, app::IPuppetBase* puppet)
    IL2CPP_REGISTER_METHOD(
        0x00736660,
        void,
        OnInitializeGhostPuppet,
        app::RecordableObjectPuppet* this_ptr,
        app::IPuppetBase* puppet,
        int32_t recording_id,
        app::GhostPlayer* player
    )
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, SetupRecordingLink, app::RecordableObjectPuppet* this_ptr, app::RecordingLink* recording_link)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordTransform, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736690, void, SetTransform, app::RecordableObjectPuppet* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00736760, void, BeginInteraction, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E35E0, void, SetUniqueRecordingId, app::RecordableObjectPuppet* this_ptr, int32_t unique_recording_id)
    IL2CPP_REGISTER_METHOD(0x00736990, void, EndInteraction, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_IsInteracting, app::RecordableObjectPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736A90, void, ctor, app::RecordableObjectPuppet* this_ptr)
} // namespace app::classes::RecordableObjectPuppet
