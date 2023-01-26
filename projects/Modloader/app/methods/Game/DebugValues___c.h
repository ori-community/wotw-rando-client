#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugValues_c.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::Game::DebugValues___c {
    IL2CPP_REGISTER_METHOD(0x015258B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugValues_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015259F0, bool, _ToggleEnemies_b__16_0, (app::DebugValues_c * this_ptr, app::GameObject* a))
    IL2CPP_REGISTER_METHOD(0x01525AB0, bool, _DisableArt_b__17_0, (app::DebugValues_c * this_ptr, app::GameObject* a))
} // namespace app::classes::Game::DebugValues___c
