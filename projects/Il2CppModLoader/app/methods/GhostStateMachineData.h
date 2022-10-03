#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostStateMachineData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonGuid*, get_Guid, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_State, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_EventId, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E9400, void, ctor_1, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E94D0, void, ctor_2, (app::GhostStateMachineData * this_ptr, app::StateMachine_2* state_machine))
    IL2CPP_REGISTER_METHOD(0x007E95D0, void, ctor_3, (app::GhostStateMachineData * this_ptr, app::StateMachine_2* state_machine, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x007E96D0, void, Save, (app::GhostStateMachineData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007E97B0, void, Load, (app::GhostStateMachineData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007E9990, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E99A0, int32_t, GetDataSize, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (app::GhostStateMachineData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (app::GhostStateMachineData * this_ptr, bool value))
} // namespace app::classes::GhostStateMachineData
