#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShardTraderInShopBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::Moon::ShardTraderInShopBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E27020, void, OnEnter, (app::ShardTraderInShopBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E27270, app::BehaviourStatus__Enum, OnExecute, (app::ShardTraderInShopBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E27000, void, OnExit, (app::ShardTraderInShopBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::ShardTraderInShopBehaviour * this_ptr))
} // namespace app::classes::Moon::ShardTraderInShopBehaviour
