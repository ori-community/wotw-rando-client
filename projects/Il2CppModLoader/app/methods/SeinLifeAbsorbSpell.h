#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinLifeAbsorbSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00890560, void, BeginCasting, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008905C0, void, EndCasting, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00890620, app::SeinLifeAbsorbArm *, ClosestFreeArm, (app::SeinLifeAbsorbSpell * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00890840, bool, AttackableIsTargetOfAnyArm, (app::SeinLifeAbsorbSpell * this_ptr, app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x00890930, void, OnSetReferenceToSein, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00890970, void, OnDestroy, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008909B0, void, Start, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008909B0, void, CreateArms, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00890B20, bool, IsEnemy, (app::SeinLifeAbsorbSpell * this_ptr, app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x00890C90, void, UpdateNotCasting, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00890D30, void, UpdateCasting, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008916B0, void, ReleaseAllArms, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsStatePerforming, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008917F0, void, UpdateCharacterState, (app::SeinLifeAbsorbSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008918A0, void, ctor, (app::SeinLifeAbsorbSpell * this_ptr))
}
