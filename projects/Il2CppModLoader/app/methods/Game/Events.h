#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Game::Events {
    IL2CPP_REGISTER_METHOD(0x01525B70, app::GameScheduler*, get_Scheduler, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Events_1 * this_ptr))
} // namespace app::classes::Game::Events
