#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Avatar.h>

namespace app::classes::UnityEngine::Avatar {
    IL2CPP_REGISTER_METHOD(0x03086410, void, ctor, (app::Avatar * this_ptr))
}
