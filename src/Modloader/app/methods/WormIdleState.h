#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/WormEnemy.h>
#include <Modloader/app/structs/WormIdleState.h>

namespace app::classes::WormIdleState {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::WormIdleState* this_ptr, app::WormEnemy* worm, app::TextureAnimationWithTransitions* idle)
    IL2CPP_REGISTER_METHOD(0x0058EE50, void, OnEnter, app::WormIdleState* this_ptr)
} // namespace app::classes::WormIdleState
