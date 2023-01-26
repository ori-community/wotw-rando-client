#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinCutsceneBlocked.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/SeinCutsceneBlocked_State__Enum.h>

namespace app::classes::SeinCutsceneBlocked {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E35E0, void, ChangeState, (app::SeinCutsceneBlocked * this_ptr, app::SeinCutsceneBlocked_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x006E35F0, void, Normal, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3600, void, Backwards, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3610, bool, get_IsNormal, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3620, bool, get_IsBackwards, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3630, bool, get_IsTransitionPlaying, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E36A0, void, FixedUpdate, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3C10, void, OnEnter, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E3CA0, void, OnExit, (app::SeinCutsceneBlocked * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinCutsceneBlocked * this_ptr))
} // namespace app::classes::SeinCutsceneBlocked
