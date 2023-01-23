#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WwiseObjectType__Enum.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::AK::Wwise::Switch {
    IL2CPP_REGISTER_METHOD(0x008556D0, app::WwiseObjectType__Enum, get_WwiseObjectType, (app::Switch_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FA040, app::WwiseObjectType__Enum, get_WwiseObjectGroupType, (app::Switch_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C39B0, void, SetValue_1, (app::Switch_1 * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x026C3B50, void, SetValue_2, (app::Switch_1 * this_ptr, uint64_t game_object))
    IL2CPP_REGISTER_METHOD(0x026C39A0, void, ctor, (app::Switch_1 * this_ptr))
} // namespace app::classes::AK::Wwise::Switch
