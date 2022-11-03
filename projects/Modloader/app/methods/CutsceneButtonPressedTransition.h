#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CutsceneButtonPressedTransition {
    IL2CPP_REGISTER_METHOD(0x00DBD8C0, bool, ShouldTransition, (app::CutsceneButtonPressedTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CutsceneButtonPressedTransition * this_ptr))
} // namespace app::classes::CutsceneButtonPressedTransition
