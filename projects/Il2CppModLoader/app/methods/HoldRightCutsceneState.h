#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HoldRightCutsceneState {
    IL2CPP_REGISTER_METHOD(0x00B585B0, app::CharacterAnimationSystem*, get_Animation, (app::HoldRightCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58680, app::SeinCutsceneBlocked*, get_CutsceneBlocked, (app::HoldRightCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58720, void, OnEnter, (app::HoldRightCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58770, void, OnUpdate, (app::HoldRightCutsceneState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B58B30, void, ctor, (app::HoldRightCutsceneState * this_ptr))
} // namespace app::classes::HoldRightCutsceneState
