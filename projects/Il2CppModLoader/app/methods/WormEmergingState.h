#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WormEmergingState {
    IL2CPP_REGISTER_METHOD(0x0058D710, void, ctor, (app::WormEmergingState * this_ptr, app::WormEnemy * worm, app::TextureAnimationWithTransitions * emerging, app::PrefabSpawner * emerging_effect, app::SoundSource * emerging_sound))
    IL2CPP_REGISTER_METHOD(0x0058D730, void, OnEnter, (app::WormEmergingState * this_ptr))
}
