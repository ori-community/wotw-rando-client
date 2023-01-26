#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NightberryPlaceholder.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::NightberryPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00609740, void, FixedUpdate, (app::NightberryPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00609A90, app::IEnumerator*, HackForFixingNightberry, (app::NightberryPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00609BE0, void, OnDrawGizmos, (app::NightberryPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00609CE0, void, OnDrawGizmosSelected, (app::NightberryPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00609DE0, void, Update, (app::NightberryPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightberryPlaceholder * this_ptr))
} // namespace app::classes::NightberryPlaceholder
