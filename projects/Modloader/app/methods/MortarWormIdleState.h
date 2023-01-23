#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarWormIdleState.h>
#include <Modloader/app/structs/MortarWormEnemy.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>

namespace app::classes::MortarWormIdleState {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::MortarWormIdleState * this_ptr, app::MortarWormEnemy* worm, app::TextureAnimationWithTransitions* idle))
}
