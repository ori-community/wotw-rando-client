#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GasballBombAttack {
    IL2CPP_REGISTER_METHOD(0x0041B3F0, app::AirEntityLocomotion*, get_Locomotion, (app::GasballBombAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041B4D0, app::BehaviourStatus__Enum, OnExecute, (app::GasballBombAttack * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041B6F0, void, ctor, (app::GasballBombAttack * this_ptr))
} // namespace app::classes::GasballBombAttack
