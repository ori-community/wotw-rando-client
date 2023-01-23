#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinPowerslideSpell.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SeinPowerslideSpell_FireTrailPoint.h>
#include <Modloader/app/structs/SeinPowerslideSpell_State__Enum.h>

namespace app::classes::SeinPowerslideSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9560, void, OnSetReferenceToSein, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C95B0, void, OnDestroy, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9600, void, Start, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9730, void, UpdateCharacterState, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9A70, void, DealFireTrailDamage, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9E80, bool, PointInsideFire, (app::SeinPowerslideSpell * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x005CA030, void, UpdateNormalState, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CA190, void, DebugDrawFireTrail, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CA230, bool, UpdateFirePoint, (app::SeinPowerslideSpell * this_ptr, app::SeinPowerslideSpell_FireTrailPoint* fire))
    IL2CPP_REGISTER_METHODINFO(0x0470CE50, SeinPowerslideSpell_UpdateFirePoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005CA480, void, UpdateFireTrail, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CA600, void, SpawnFire, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CAD40, void, UpdatePowerslidingState, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB1A0, void, StopPowersliding, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB2B0, bool, HasEnoughEnergy, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB2F0, void, SpendEnergy, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB330, void, ReturnEnergy, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB370, void, ShowNotEnoughEnergy, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB580, bool, IsAgainstWall, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB730, bool, CanPerformPowerslide, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB7B0, bool, KeepAnimationPlaying, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E7C0, SeinPowerslideSpell_KeepAnimationPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005CB850, void, PerformPowerslide, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CBC20, void, ChangeState, (app::SeinPowerslideSpell * this_ptr, app::SeinPowerslideSpell_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x005CBD10, void, KnockNearbyEnemies, (app::SeinPowerslideSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CC320, void, ctor, (app::SeinPowerslideSpell * this_ptr))
} // namespace app::classes::SeinPowerslideSpell
