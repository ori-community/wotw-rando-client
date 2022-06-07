#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinLifeAbsorbArm {
    IL2CPP_REGISTER_METHOD(0x0088EB90, app::SeinLifeAbsorbSpell *, get_Spell, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088EBD0, bool, get_HasTarget, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088ECC0, bool, get_IsAbsorbing, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088ED30, void, Awake, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088EF30, app::Vector3, Biezer, (app::SeinLifeAbsorbArm * this_ptr, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3, app::Vector3 p4, float x))
    IL2CPP_REGISTER_METHOD(0x0088F600, void, FixedUpdate, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088FA20, void, UpdateLineRenderer, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00890230, void, SetTarget, (app::SeinLifeAbsorbArm * this_ptr, app::IAttackable * target))
    IL2CPP_REGISTER_METHOD(0x008903B0, void, ReleaseTarget, (app::SeinLifeAbsorbArm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (app::SeinLifeAbsorbArm * this_ptr, app::SeinCharacter * sein))
    IL2CPP_REGISTER_METHOD(0x008903D0, void, PlaySound, (app::SeinLifeAbsorbArm * this_ptr, app::SoundProvider * sound))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinLifeAbsorbArm * this_ptr))
}
