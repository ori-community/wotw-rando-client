#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WormHidingState {
    IL2CPP_REGISTER_METHOD(0x0058D710, void, ctor, (app::WormHidingState * this_ptr, app::WormEnemy * worm, app::TextureAnimationWithTransitions * hiding, app::PrefabSpawner * hiding_effect, app::SoundSource * hiding_sound))
    IL2CPP_REGISTER_METHOD(0x0058DE00, void, OnEnter, (app::WormHidingState * this_ptr))
}
