#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HitReactionController.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::HitReactionController {
    IL2CPP_REGISTER_METHOD(0x00B577D0, void, InitializeForTimeline, (app::HitReactionController * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00B57910, void, Reset, (app::HitReactionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B579F0, bool, CanAccumulateHits, (app::HitReactionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57C80, bool, CanHitReact, (app::HitReactionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57E10, void, ctor, (app::HitReactionController * this_ptr))
} // namespace app::classes::HitReactionController
