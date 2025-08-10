#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/GhostFrame.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GhostServerEventsPlugin.h>
#include <Modloader/app/structs/GhostUberStatePlugin.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#include <Modloader/app/structs/IRecordable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::GhostRecorder {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::BinaryWriter*, get_RecorderStream, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DF7E0, app::GhostFrame*, get_CurrentFrame, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::String*, get_FilePath, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DF810, void, Awake, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DF8E0, void, OnDestroy, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DF990, void, InitializeRecorder, app::GhostRecorder* this_ptr, app::String* output_path)
    IL2CPP_REGISTER_METHOD(0x007E0310, void, InitializeMemoryStream, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E03D0, void, DestroyRecorder, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E0580, void, StartRecorder, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E06F0, void, StopRecorder, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E0A00, void, WriteToFile, app::GhostRecorder* this_ptr, app::String* path, bool allow_append)
    IL2CPP_REGISTER_METHOD(0x007E0C90, void, Cancel, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E0CD0, void, FinalizeFrame, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E0E30, void, FixedUpdate, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E13C0, void, Record_1, app::GhostRecorder* this_ptr, app::StateMachine_2* state_machine)
    IL2CPP_REGISTER_METHOD(0x007E13D0, void, Record_2, app::GhostRecorder* this_ptr, app::StateMachine_2* state_machine, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x007E16C0, void, RegisterPlugin, app::GhostRecorder* this_ptr, app::IGhostRecorderPlugin* plugin)
    IL2CPP_REGISTER_METHOD(0x007E1840, void, DeregisterPlugin, app::GhostRecorder* this_ptr, app::IGhostRecorderPlugin* plugin)
    IL2CPP_REGISTER_METHOD(0x007E1900, void, RegisterPuppet, app::GenericPuppet* puppet)
    IL2CPP_REGISTER_METHOD(0x007E19D0, void, UnregisterPuppet, app::GenericPuppet* puppet)
    IL2CPP_REGISTER_METHOD(
        0x007E1A90,
        void,
        RegisterPreRecordingInstantiationEvent,
        app::GhostRecorder* this_ptr,
        app::GameObject* instance,
        app::GameObject* prefab
    )
    IL2CPP_REGISTER_METHOD(0x007E1DE0, void, RegisterPreRecordingDynamicSceneObject, app::GhostRecorder* this_ptr, app::IRecordable* recordable)
    IL2CPP_REGISTER_METHOD(0x007E1FD0, void, RegisterPreRecordingUberState, app::GhostRecorder* this_ptr, app::IGenericUberState* uber_state, float value)
    IL2CPP_REGISTER_METHOD(
        0x007E2220,
        void,
        HandlePreRecordingInstantiationTableRegistering,
        app::GhostRecorder* this_ptr,
        app::GameObject* instance,
        app::GameObject* prefab
    )
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, app::GhostRecorder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0070DEC0, app::SuspendableMask__Enum, get_Mask, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E2390, void, set_Mask, app::GhostRecorder* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x007E2450, void, ctor, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E2760, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015EA5B0, app::Object*, GetPlugin_1, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EA5B0, app::GhostServerEventsPlugin*, GetPlugin_2, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EA5B0, app::GhostGenericEventsPlugin*, GetPlugin_3, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EA5B0, app::GhostWorldObjectsLifetimePlugin*, GetPlugin_4, app::GhostRecorder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EA5B0, app::GhostUberStatePlugin*, GetPlugin_5, app::GhostRecorder* this_ptr)
} // namespace app::classes::GhostRecorder
