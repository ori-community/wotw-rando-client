#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NPCSettings.h>

namespace app::classes::Moon::NPCSettings {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NPCSettings * this_ptr))
}
