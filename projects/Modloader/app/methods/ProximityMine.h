#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/ProximityMine.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::ProximityMine {
    IL2CPP_REGISTER_METHOD(0x00C7FA90, app::SeinCharacter*, get_Sein, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7FB20, void, OnAwake, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7FF90, void, OnDestroy, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C80140, void, Update, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C803A0, void, Explode, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734588, ProximityMine_Explode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C80600, void, DisableMine, (app::ProximityMine * this_ptr, bool disable))
    IL2CPP_REGISTER_METHOD(0x00C80970, void, Reset, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C80970, void, OnRestoreCheckpoint, (app::ProximityMine * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779B48, ProximityMine_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C80990, void, OnRecieveDamage, (app::ProximityMine * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x04733308, ProximityMine_OnRecieveDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C809A0, void, DealDamageInRadius, (app::ProximityMine * this_ptr, float amount, float radius))
    IL2CPP_REGISTER_METHOD(0x00C80EA0, void, ctor, (app::ProximityMine * this_ptr))
} // namespace app::classes::ProximityMine
