#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TentacleEnemy_LookAtOriState {
    IL2CPP_REGISTER_METHOD(0x00CF7FB0, app::String*, get_Name, (app::TentacleEnemy_LookAtOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, (app::TentacleEnemy_LookAtOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, (app::TentacleEnemy_LookAtOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF8030, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, (app::TentacleEnemy_LookAtOriState * this_ptr, app::TickData tick))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanEvadeSlash, (app::TentacleEnemy_LookAtOriState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF8250, void, ctor, (app::TentacleEnemy_LookAtOriState * this_ptr))
} // namespace app::classes::TentacleEnemy_LookAtOriState
