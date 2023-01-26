#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseObjectType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Trigger.h>

namespace app::classes::AK::Wwise::Trigger {
    IL2CPP_REGISTER_METHOD(0x00C8F220, app::WwiseObjectType__Enum, get_WwiseObjectType, (app::Trigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026C3CC0, void, Post_1, (app::Trigger * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x026C3E50, void, Post_2, (app::Trigger * this_ptr, uint64_t game_object))
    IL2CPP_REGISTER_METHOD(0x026C1170, void, ctor, (app::Trigger * this_ptr))
} // namespace app::classes::AK::Wwise::Trigger
