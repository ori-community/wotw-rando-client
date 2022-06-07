#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KamikazeJumperKillOnHit {
    IL2CPP_REGISTER_METHOD(0x00E5ADE0, void, Start, (app::KamikazeJumperKillOnHit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5AFA0, void, OnDanageDealt, (app::KamikazeJumperKillOnHit * this_ptr, app::DamageDealer * dealer, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x0477C3B8, KamikazeJumperKillOnHit_OnDanageDealt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::KamikazeJumperKillOnHit * this_ptr))
}
