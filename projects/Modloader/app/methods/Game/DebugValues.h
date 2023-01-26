#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugValues.h>

namespace app::classes::Game::DebugValues {
    IL2CPP_REGISTER_METHOD(0x015247D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01524940, bool, ToggleEnemies, ())
    IL2CPP_REGISTER_METHOD(0x01524D50, bool, DisableArt, ())
    IL2CPP_REGISTER_METHOD(0x01525160, bool, DisableAllParticles, ())
    IL2CPP_REGISTER_METHOD(0x01525640, bool, ToggleSceneMode, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01525790, void, cctor, ())
} // namespace app::classes::Game::DebugValues
