#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TentacleEnemy_StunState.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::TentacleEnemy_StunState {
    IL2CPP_REGISTER_METHOD(0x00CFC770, bool, get_IsStun, app::TentacleEnemy_StunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFC780, app::String*, get_Name, app::TentacleEnemy_StunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBegin, app::TentacleEnemy_StunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInterrupt, app::TentacleEnemy_StunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFC800, app::BehaviourTreeStatus__Enum, OnTentacleStateUpdate, app::TentacleEnemy_StunState* this_ptr, app::TickData tick)
    IL2CPP_REGISTER_METHOD(0x00CFC890, void, MakeStun, app::TentacleEnemy_StunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFC9C0, void, ctor, app::TentacleEnemy_StunState* this_ptr)
} // namespace app::classes::TentacleEnemy_StunState
