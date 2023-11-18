#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShardTraderDidNotBuyBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::ShardTraderDidNotBuyBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E26C00, void, OnEnter, (app::ShardTraderDidNotBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E26E60, app::BehaviourStatus__Enum, OnExecute, (app::ShardTraderDidNotBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E26E90, void, OnExit, (app::ShardTraderDidNotBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::ShardTraderDidNotBuyBehaviour * this_ptr))
} // namespace app::classes::Moon::ShardTraderDidNotBuyBehaviour
