#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MortarWormChargingState {
    IL2CPP_REGISTER_METHOD(0x0147FE90, void, ctor, (app::MortarWormChargingState * this_ptr, app::MortarWormEnemy* mortar_worm_enemy, app::TextureAnimationWithTransitions* charging, app::PrefabSpawner* charging_effect, app::SoundSource* charging_sound))
    IL2CPP_REGISTER_METHOD(0x0147FEB0, void, OnEnter, (app::MortarWormChargingState * this_ptr))
} // namespace app::classes::MortarWormChargingState
