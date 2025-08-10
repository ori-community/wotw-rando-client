#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/ShootableCreepAnimator.h>

namespace app::classes::ShootableCreepAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B95D0, void, set_MoonSetupVisuals, app::ShootableCreepAnimator* this_ptr, app::IMoonSetupVisuals* value)
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::ITimelineEntity*, get_DeathTimeline, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B96C0, app::ITimelineEntity*, get_HitTimeline, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InvalidateParentTimelineCache, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_InvalidateParentTimelineCache, app::ShootableCreepAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005B96E0, void, PlayDeathSequence, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9710, void, PlayHitSequence, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B9740, void, OnChangeState, app::ShootableCreepAnimator* this_ptr, bool destroyed)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::ShootableCreepAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::ShootableCreepAnimator* this_ptr)
} // namespace app::classes::ShootableCreepAnimator
