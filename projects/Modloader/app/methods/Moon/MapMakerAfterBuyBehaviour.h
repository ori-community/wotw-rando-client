#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MapMakerAfterBuyBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110E280, void, OnEnter, (app::MapMakerAfterBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110E370, app::BehaviourStatus__Enum, OnExecute, (app::MapMakerAfterBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110E3A0, void, OnExit, (app::MapMakerAfterBuyBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MapMakerAfterBuyBehaviour * this_ptr))
} // namespace app::classes::Moon::MapMakerAfterBuyBehaviour
