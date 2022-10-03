#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MortarWormIdleState {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::MortarWormIdleState * this_ptr, app::MortarWormEnemy* worm, app::TextureAnimationWithTransitions* idle))
}
