#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BreakableWallAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::BreakableWallAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4E8F0, app::Transform*, get_WallVisualRoot, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EA10, app::GameObject*, get_WallPartA, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EAE0, app::GameObject*, get_WallPartB, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EBB0, app::GameObject*, get_WallPartC, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EC80, app::ITimelineEntity*, get_ToStageBTimeline, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4ED50, app::ITimelineEntity*, get_ToStageCTimeline, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EE20, app::ITimelineEntity*, get_ToDestroyedTimeline, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EEF0, app::ITimelineEntity*, get_HitTimeline, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4EFC0, app::GameObject*, get_HighlightTarget, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4F090, app::GameObject*, get_FadeoutTarget, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653F90, bool, get_IsSecret, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_InvalidateParentTimelineCache, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_InvalidateParentTimelineCache, app::BreakableWallAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D4F160, void, OnDeath, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4F250, void, OnDeathByFire, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B96E0, void, OnHit, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D4F320, void, OnChangeState, app::BreakableWallAnimator* this_ptr, int32_t state_index)
    IL2CPP_REGISTER_METHOD(0x00653FA0, void, SetSecret, app::BreakableWallAnimator* this_ptr, bool is_secret)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::BreakableWallAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::BreakableWallAnimator* this_ptr)
} // namespace app::classes::BreakableWallAnimator
