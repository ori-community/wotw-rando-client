#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShardTraderInteractionBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::ShardTraderInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E273B0, void, OnEnter, (app::ShardTraderInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E274A0, app::BehaviourStatus__Enum, OnExecute, (app::ShardTraderInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E27000, void, OnExit, (app::ShardTraderInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::ShardTraderInteractionBehaviour * this_ptr))
} // namespace app::classes::Moon::ShardTraderInteractionBehaviour
