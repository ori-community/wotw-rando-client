#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/NightBerrySpiritRing.h>

namespace app::classes::NightBerrySpiritRing {
    IL2CPP_REGISTER_METHOD(0x006016D0, void, OnTriggerEnter, app::NightBerrySpiritRing* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x006017D0, void, OnTriggerExit, app::NightBerrySpiritRing* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::NightBerrySpiritRing* this_ptr)
} // namespace app::classes::NightBerrySpiritRing
