#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/WwiseObjectType__Enum.h>

namespace app::classes::AK::Wwise::RTPC {
    IL2CPP_REGISTER_METHOD(0x004AB2B0, app::WwiseObjectType__Enum, get_WwiseObjectType, app::RTPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C2DF0, void, SetValue_1, app::RTPC* this_ptr, app::GameObject* game_object, float value)
    IL2CPP_REGISTER_METHOD(0x026C2F90, void, SetValue_2, app::RTPC* this_ptr, uint64_t game_object, float value)
    IL2CPP_REGISTER_METHOD(0x026C30F0, float, GetValue, app::RTPC* this_ptr, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x026C3350, void, SetGlobalValue, app::RTPC* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026C3520, float, GetGlobalValue, app::RTPC* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, app::RTPC* this_ptr)
} // namespace app::classes::AK::Wwise::RTPC
