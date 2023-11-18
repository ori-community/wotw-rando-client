#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NodeSoundPlayerPair.h>

namespace app::classes::NodeSoundPlayerPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NodeSoundPlayerPair * this_ptr))
}
