#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TentacleEnemy_StunState {
    IL2CPP_REGISTER_METHOD(0x00CFC770, bool, get_IsStun, (app::TentacleEnemy_StunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFC780, app::String *, get_Name, (app::TentacleEnemy_StunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, (app::TentacleEnemy_StunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (app::TentacleEnemy_StunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFC800, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_StunState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x00CFC890, void, MakeStun, (app::TentacleEnemy_StunState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFC9C0, void, ctor, (app::TentacleEnemy_StunState * this_ptr))
}
