#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ShardTraderMoveOriToPositionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E274D0, void, OnEnter, (app::ShardTraderMoveOriToPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E275C0, app::BehaviourStatus__Enum, OnExecute, (app::ShardTraderMoveOriToPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E275F0, void, OnExit, (app::ShardTraderMoveOriToPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::ShardTraderMoveOriToPositionBehaviour * this_ptr))
} // namespace app::classes::Moon::ShardTraderMoveOriToPositionBehaviour
