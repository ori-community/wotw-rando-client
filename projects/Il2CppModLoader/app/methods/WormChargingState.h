#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WormChargingState {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::WormChargingState * this_ptr, app::WormEnemy* worm, app::TextureAnimationWithTransitions* charging, app::PrefabSpawner* charging_effect))
    IL2CPP_REGISTER_METHOD(0x0058D6B0, void, OnEnter, (app::WormChargingState * this_ptr))
} // namespace app::classes::WormChargingState
