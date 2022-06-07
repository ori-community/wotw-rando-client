#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NormalBackwardsCutsceneState {
    IL2CPP_REGISTER_METHOD(0x0060BDF0, void, OnEnter, (app::NormalBackwardsCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060BF20, void, OnExit, (app::NormalBackwardsCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C050, void, ctor, (app::NormalBackwardsCutsceneState * this_ptr))
}
