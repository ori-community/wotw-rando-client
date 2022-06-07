#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinHomingMissileSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6D240, app::Vector3, get_SeinPosition, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010090A0, void, OnSetReferenceToSein, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, KeepMissileAnimationPlaying, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010090D0, void, Start, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01009190, void, OnDestroy, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01009280, void, ChangeState, (app::SeinHomingMissileSpell * this_ptr, app::SeinHomingMissileSpell_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x010092F0, bool, get_IsStatePerforming, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01009300, void, UpdateCharacterState, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010093B0, void, UpdateIdle, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01009550, void, StartTagging, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010095A0, void, UpdateTagging, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01009C60, void, UpdateAttacking, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A73300, bool, CanAttack, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100A080, bool, SetSingleShotTarget, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100A3F0, void, Tag, (app::SeinHomingMissileSpell * this_ptr, app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x0100A5C0, void, Untag, (app::SeinHomingMissileSpell * this_ptr, app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x0100A730, void, UntagAll, (app::SeinHomingMissileSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100A960, void, Serialize, (app::SeinHomingMissileSpell * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0100A9A0, void, ctor, (app::SeinHomingMissileSpell * this_ptr))
}
