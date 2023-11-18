#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MapMakerDidNotBuyBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::MapMakerDidNotBuyBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110E520, void, OnEnter, (app::MapMakerDidNotBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110E610, app::BehaviourStatus__Enum, OnExecute, (app::MapMakerDidNotBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110E640, void, OnExit, (app::MapMakerDidNotBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MapMakerDidNotBuyBehaviour * this_ptr))
} // namespace app::classes::Moon::MapMakerDidNotBuyBehaviour
