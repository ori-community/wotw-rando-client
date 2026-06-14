#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/MusicSourceTrigger.h>

namespace app::classes::MusicSourceTrigger {
    IL2CPP_REGISTER_METHOD(0x0087EA30, void, OnTriggerEnter, app::MusicSourceTrigger* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MusicSourceTrigger* this_ptr)
} // namespace app::classes::MusicSourceTrigger
