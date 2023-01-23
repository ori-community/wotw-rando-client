#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinPushAgainstWall.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>

namespace app::classes::SeinPushAgainstWall {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_SpriteMirror, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0760, bool, get_ShouldPushAgainstWallAnimationPlay, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0770, void, OnSetReferenceToSein, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0870, void, UpdateCharacterState, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0BD0, bool, CanDash, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0E00, bool, ShouldPushAgainstWallAnimationKeepPlaying, (app::SeinPushAgainstWall * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BA80, SeinPushAgainstWall_ShouldPushAgainstWallAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinPushAgainstWall * this_ptr))
} // namespace app::classes::SeinPushAgainstWall
