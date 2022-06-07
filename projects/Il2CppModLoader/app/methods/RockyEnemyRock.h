#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RockyEnemyRock {
    IL2CPP_REGISTER_METHOD(0x01362520, void, Awake, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013625B0, void, FixedUpdate, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013628B0, void, SlowDown, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01362B20, bool, IsAlmostStill, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01362BC0, void, TurnBack, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013630F0, bool, IsSeinInOpenRange, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01363360, app::Vector3, get_PlayerPosition, (app::RockyEnemyRock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01363450, void, ctor, (app::RockyEnemyRock * this_ptr))
}
