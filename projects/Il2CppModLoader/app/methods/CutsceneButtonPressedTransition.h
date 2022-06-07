#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CutsceneButtonPressedTransition {
    IL2CPP_REGISTER_METHOD(0x00DBD8C0, bool, ShouldTransition, (app::CutsceneButtonPressedTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CutsceneButtonPressedTransition * this_ptr))
}
