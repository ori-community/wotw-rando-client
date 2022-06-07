#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HitReactionController {
    IL2CPP_REGISTER_METHOD(0x00B577D0, void, InitializeForTimeline, (app::HitReactionController * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x00B57910, void, Reset, (app::HitReactionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B579F0, bool, CanAccumulateHits, (app::HitReactionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57C80, bool, CanHitReact, (app::HitReactionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B57E10, void, ctor, (app::HitReactionController * this_ptr))
}
