#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CartJump.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>

namespace app::classes::CartJump {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B391F0, bool, get_CanJump, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39300, app::CharacterPlatformMovement*, get_PlatformMovement, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39320, bool, get_SpriteMirrorLock, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39330, void, set_SpriteMirrorLock, app::CartJump* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B393D0, app::CharacterSpriteMirror*, get_CharacterSpriteMirror, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetReferenceToSein, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39410, void, UpdateCharacterState, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B394D0, float, CalculateSpeedFromHeight, app::CartJump* this_ptr, float height)
    IL2CPP_REGISTER_METHOD(0x00B395C0, void, PerformJump, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B399D0, void, PerformRunningJump, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39C70, void, CacheDelegates, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39EC0, bool, ShouldJumpMovingAnimationKeepPlaying, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39F40, void, OnAnimationEnd, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39FA0, void, OnAnimationStart, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A000, void, Serialize, app::CartJump* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00B3A060, void, OnAwake, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A200, void, OnDestroy, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3B0, void, OnRestoreCheckpoint, app::CartJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3C0, void, ctor, app::CartJump* this_ptr)
} // namespace app::classes::CartJump
