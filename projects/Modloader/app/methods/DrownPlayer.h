#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DrownPlayer.h>

namespace app::classes::DrownPlayer {
    IL2CPP_REGISTER_METHOD(0x00BE8450, void, OnTriggerStay, app::DrownPlayer* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DrownPlayer* this_ptr)
} // namespace app::classes::DrownPlayer
