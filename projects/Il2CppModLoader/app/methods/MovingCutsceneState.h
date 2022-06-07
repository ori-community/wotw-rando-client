#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MovingCutsceneState {
    IL2CPP_REGISTER_METHOD(0x0086C6F0, app::SeinCharacter *, get_Sein, (app::MovingCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086C780, void, OnEnter, (app::MovingCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086C910, void, OnExit, (app::MovingCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086CB70, void, OnUpdate, (app::MovingCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086D240, void, ctor, (app::MovingCutsceneState * this_ptr))
}
