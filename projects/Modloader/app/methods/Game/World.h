#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/World.h>

namespace app::classes::Game::World {
    IL2CPP_REGISTER_METHOD(0x00687440, app::RuntimeGameWorldArea*, get_CurrentArea, ())
    IL2CPP_REGISTER_METHOD(0x006874D0, void, set_CurrentArea, (app::RuntimeGameWorldArea * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::World * this_ptr))
} // namespace app::classes::Game::World
