#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostStateMachinePlugin {
    IL2CPP_REGISTER_METHOD(0x007E99B0, void, Register, (app::MoonGuid * guid, app::StateMachine_2* state_machine))
    IL2CPP_REGISTER_METHOD(0x007E9AA0, void, Unregister, (app::MoonGuid * guid))
    IL2CPP_REGISTER_METHOD(0x007E9B60, void, PlayCycle, (app::GhostStateMachinePlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (app::GhostStateMachinePlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00417920, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostStateMachinePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E9D80, void, OnStateChanged, (app::GhostStateMachinePlugin * this_ptr, app::StateMachine_2* state_machine))
    IL2CPP_REGISTER_METHOD(0x007E9DC0, void, OnEventTriggered, (app::GhostStateMachinePlugin * this_ptr, app::StateMachine_2* state_machine, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostStateMachinePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E9E00, void, cctor, ())
} // namespace app::classes::GhostStateMachinePlugin
