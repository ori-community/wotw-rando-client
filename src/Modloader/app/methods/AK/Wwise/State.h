#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/WwiseObjectType__Enum.h>

namespace app::classes::AK::Wwise::State {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::WwiseObjectType__Enum, get_WwiseObjectType, app::State* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::WwiseObjectType__Enum, get_WwiseObjectGroupType, app::State* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C3530, void, SetValue, app::State* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C3610, void, SetValueFast, uint32_t id, uint32_t group_i_d)
    IL2CPP_REGISTER_METHOD(0x026C36E0, void, SetValueSpecific, app::State* this_ptr, uint32_t id)
    IL2CPP_REGISTER_METHOD(0x026C37B0, uint32_t, GetGroupsCurrentState, app::State* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C39A0, void, ctor, app::State* this_ptr)
} // namespace app::classes::AK::Wwise::State
