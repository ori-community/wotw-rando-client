#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeekerSlugShootingState {
    IL2CPP_REGISTER_METHOD(0x0106C6F0, void, ctor, (app::SeekerSlugShootingState * this_ptr, app::SlugEnemy* slug, app::SlugDirectionalAnimation* animation, app::GameObject* spike_prefab, app::SoundSource* shooting_sound))
    IL2CPP_REGISTER_METHOD(0x0106C860, void, SetSettings, (app::SeekerSlugShootingState * this_ptr, float projectile_speed, float number_of_shots, float delay_between_shots))
    IL2CPP_REGISTER_METHOD(0x0106C870, void, OnEnter, (app::SeekerSlugShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106C950, void, UpdateState, (app::SeekerSlugShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106CA00, void, Shoot, (app::SeekerSlugShootingState * this_ptr))
} // namespace app::classes::SeekerSlugShootingState
