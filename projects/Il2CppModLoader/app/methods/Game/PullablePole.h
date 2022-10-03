#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Game::PullablePole {
    IL2CPP_REGISTER_METHOD(0x015273C0, void, OnGrabbed, (app::PullablePole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015275E0, void, OnReleased, (app::PullablePole * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01527800, app::IDesiredUberState*, GetRequirementsForTimeline, (app::PullablePole * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x015278A0, void, ctor, (app::PullablePole * this_ptr))
} // namespace app::classes::Game::PullablePole
