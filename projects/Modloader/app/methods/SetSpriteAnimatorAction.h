#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetSpriteAnimatorAction {
    IL2CPP_REGISTER_METHOD(0x005A4BB0, void, Perform, (app::SetSpriteAnimatorAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A4CC0, void, ctor, (app::SetSpriteAnimatorAction * this_ptr))
} // namespace app::classes::SetSpriteAnimatorAction
