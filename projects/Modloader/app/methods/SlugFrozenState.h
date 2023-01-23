#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SlugFrozenState.h>
#include <Modloader/app/structs/SlugEnemy.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>

namespace app::classes::SlugFrozenState {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::SlugFrozenState * this_ptr, app::SlugEnemy* slug, app::TextureAnimationWithTransitions* frozen))
}
