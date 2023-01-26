#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinRun.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinRunPuppet.h>

namespace app::classes::SeinRun {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6EE0, app::SeinRunPuppet*, get_Puppet, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_SpriteMirror, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6FA0, bool, get_HasSharplyChangedDirection, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6FD0, void, Serialize, (app::SeinRun * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x005D7040, void, OnSetReferenceToSein, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D7120, void, OnEnter, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D71A0, void, HandleControllerInput, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D77D0, void, CheckForSharpTurn, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D7980, void, UpdateCharacterState, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8490, bool, ShouldRunAnimationPlaying, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D85D0, bool, ShouldJogAnimationPlay, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8710, bool, ShouldWalkAnimationPlay, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8850, bool, ShouldAnimationKeepPlaying, (app::SeinRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8980, void, ctor, (app::SeinRun * this_ptr))
} // namespace app::classes::SeinRun
