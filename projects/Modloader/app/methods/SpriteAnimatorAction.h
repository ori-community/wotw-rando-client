#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpriteAnimatorAction {
    IL2CPP_REGISTER_METHOD(0x009AC210, void, Perform, (app::SpriteAnimatorAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009AC2C0, app::String*, GetNiceName, (app::SpriteAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpriteAnimatorAction * this_ptr))
} // namespace app::classes::SpriteAnimatorAction
