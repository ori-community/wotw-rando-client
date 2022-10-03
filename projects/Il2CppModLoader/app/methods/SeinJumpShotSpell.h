#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinJumpShotSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101E120, void, OnSetReferenceToSein, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101E2D0, void, PerformJump, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101E650, void, UpdateFlyingTowards, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101EBA0, void, OnDestroy, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101ED60, void, UpdateCharacterState, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101EED0, void, ChangeState, (app::SeinJumpShotSpell * this_ptr, app::SeinJumpShotSpell_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x0101F780, void, Deactivate, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101F930, void, UpdateInactive, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101FC90, void, UpdateActive, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101FCB0, void, UpdateShieldActive, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101FFF0, void, OnDoubleJump, (app::SeinJumpShotSpell * this_ptr, float strength))
    IL2CPP_REGISTER_METHODINFO(0x0478D630, SeinJumpShotSpell_OnDoubleJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010200A0, float, dot, (app::SeinJumpShotSpell * this_ptr, app::Vector3 v1, app::Vector3 v2))
    IL2CPP_REGISTER_METHOD(0x010200F0, app::Vector3, reflect, (app::SeinJumpShotSpell * this_ptr, app::Vector3 v, app::Vector3 axis))
    IL2CPP_REGISTER_METHOD(0x01020260, void, OnShieldCollision, (app::SeinJumpShotSpell * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x047752A8, SeinJumpShotSpell_OnShieldCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinJumpShotSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01020A10, void, ctor, (app::SeinJumpShotSpell * this_ptr))
} // namespace app::classes::SeinJumpShotSpell
