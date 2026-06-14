#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/PressAOrRightCutsceneState.h>
#include <Modloader/app/structs/SeinCutsceneBlocked.h>

namespace app::classes::PressAOrRightCutsceneState {
    IL2CPP_REGISTER_METHOD(0x00C6FEC0, app::CharacterAnimationSystem*, get_Animation, app::PressAOrRightCutsceneState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C6FF90, app::SeinCutsceneBlocked*, get_CutsceneBlocked, app::PressAOrRightCutsceneState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C70030, void, OnEnter, app::PressAOrRightCutsceneState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C70080, void, OnUpdate, app::PressAOrRightCutsceneState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C70490, void, ctor, app::PressAOrRightCutsceneState* this_ptr)
} // namespace app::classes::PressAOrRightCutsceneState
