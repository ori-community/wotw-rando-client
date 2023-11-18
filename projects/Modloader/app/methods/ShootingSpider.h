#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShootingSpider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ShootingSpider {
    IL2CPP_REGISTER_METHOD(0x005BAC30, void, Awake, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BC350, void, OnTimedRespawn, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BC3A0, void, FixedUpdate, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BC520, bool, ShouldCharge, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BC5A0, void, ShootProjectileAtPlayer, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BC9E0, void, ShootProjectile, (app::ShootingSpider * this_ptr, app::Vector3 position, app::Vector3 direction, float speed))
    IL2CPP_REGISTER_METHOD(0x005BCC30, void, ctor, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCD80, void, _Awake_b__9_0, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCDE0, void, _Awake_b__9_1, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCE40, void, _Awake_b__9_2, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCE90, void, _Awake_b__9_3, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCEC0, void, _Awake_b__9_4, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCF30, void, _Awake_b__9_5, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCF40, void, _Awake_b__9_6, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BCF30, void, _Awake_b__9_7, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BD0C0, void, _Awake_b__9_8, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BD130, bool, _Awake_b__9_9, (app::ShootingSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005BD180, bool, _Awake_b__9_10, (app::ShootingSpider * this_ptr))
} // namespace app::classes::ShootingSpider
