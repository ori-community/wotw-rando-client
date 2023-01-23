#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/EnergyPlantAnimator.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::EnergyPlantAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89790, void, set_MoonSetupVisuals, (app::EnergyPlantAnimator * this_ptr, app::IMoonSetupVisuals* value))
    IL2CPP_REGISTER_METHOD(0x005B96C0, app::ITimelineEntity*, get_DeathTimeline, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89860, app::ITimelineEntity*, get_HitTimeline, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89880, app::ITimelineEntity*, get_RespawnTimeline, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B96E0, void, PlayDeathSequence, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B9710, void, PlayHitSequence, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C898A0, void, PlayRespawnSequence, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C898F0, void, OnChangeState, (app::EnergyPlantAnimator * this_ptr, bool destroyed))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::EnergyPlantAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::EnergyPlantAnimator * this_ptr))
} // namespace app::classes::EnergyPlantAnimator
