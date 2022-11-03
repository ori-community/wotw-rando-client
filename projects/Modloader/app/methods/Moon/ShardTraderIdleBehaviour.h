#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ShardTraderIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E26EC0, void, OnEnter, (app::ShardTraderIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E26FD0, app::BehaviourStatus__Enum, OnExecute, (app::ShardTraderIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E27000, void, OnExit, (app::ShardTraderIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::ShardTraderIdleBehaviour * this_ptr))
} // namespace app::classes::Moon::ShardTraderIdleBehaviour
