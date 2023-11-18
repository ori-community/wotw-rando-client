#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlockFullGameLogic.h>

namespace app::classes::UnlockFullGameLogic {
    IL2CPP_REGISTER_METHOD(0x013AC460, void, FixedUpdate, (app::UnlockFullGameLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UnlockFullGameLogic * this_ptr))
} // namespace app::classes::UnlockFullGameLogic
