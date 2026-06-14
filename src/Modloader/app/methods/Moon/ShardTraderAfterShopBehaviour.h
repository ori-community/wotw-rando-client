#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShardTraderAfterShopBehaviour.h>

namespace app::classes::Moon::ShardTraderAfterShopBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E26940, void, OnEnter, app::ShardTraderAfterShopBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E26BA0, app::BehaviourStatus__Enum, OnExecute, app::ShardTraderAfterShopBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E26BD0, void, OnExit, app::ShardTraderAfterShopBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::ShardTraderAfterShopBehaviour* this_ptr)
} // namespace app::classes::Moon::ShardTraderAfterShopBehaviour
