#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinFirewhirlSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADF2D0, void, OnSetReferenceToSein, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADF320, bool, get_HasEnoughEnergy, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADF360, void, SpendEnergy, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADF3A0, void, UpdateCharacterState, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADF910, void, UpdateBeamDamageDealing, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ADFD00, void, UpdateSpawningBeams, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE0360, void, DealDamage, (app::SeinFirewhirlSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AE0780, bool, PointInsideListOfRect, (app::SeinFirewhirlSpell * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00AE08B0, void, ctor, (app::SeinFirewhirlSpell * this_ptr))
}
