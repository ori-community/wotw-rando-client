#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObjectChanges.h>

namespace app::classes::Moon::ReviewFramework::GameObjectChanges {
    IL2CPP_REGISTER_METHOD(0x00EC0DE0, void, ctor, (app::GameObjectChanges * this_ptr))
}
