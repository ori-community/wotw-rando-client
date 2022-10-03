#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TentacleEnemy_SpitAttackState {
    IL2CPP_REGISTER_METHOD(0x00CFA580, app::String*, get_Name, (app::TentacleEnemy_SpitAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFA600, void, OnBegin, (app::TentacleEnemy_SpitAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFA7A0, void, OnInterrupt, (app::TentacleEnemy_SpitAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFA7B0, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_SpitAttackState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanEvadeSlash, (app::TentacleEnemy_SpitAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFAD80, void, OnExit, (app::TentacleEnemy_SpitAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFADF0, bool, UpdateSpawner, (app::TentacleEnemy_SpitAttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFB2C0, void, ctor, (app::TentacleEnemy_SpitAttackState * this_ptr))
} // namespace app::classes::TentacleEnemy_SpitAttackState
