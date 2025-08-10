#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/WormEnemy.h>
#include <Modloader/app/structs/WormHiddenState.h>

namespace app::classes::WormHiddenState {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::WormHiddenState* this_ptr, app::WormEnemy* worm, app::TextureAnimationWithTransitions* hidden)
    IL2CPP_REGISTER_METHOD(0x0058DA50, void, OnEnter, app::WormHiddenState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058DC40, void, OnExit, app::WormHiddenState* this_ptr)
} // namespace app::classes::WormHiddenState
