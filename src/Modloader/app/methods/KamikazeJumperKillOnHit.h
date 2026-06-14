#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/KamikazeJumperKillOnHit.h>

namespace app::classes::KamikazeJumperKillOnHit {
    IL2CPP_REGISTER_METHOD(0x00E5ADE0, void, Start, app::KamikazeJumperKillOnHit* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5AFA0, void, OnDanageDealt, app::KamikazeJumperKillOnHit* this_ptr, app::DamageDealer* dealer, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::KamikazeJumperKillOnHit* this_ptr)
} // namespace app::classes::KamikazeJumperKillOnHit
