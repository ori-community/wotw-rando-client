#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/SnapTrapHookAnimator.h>

namespace app::classes::SnapTrapHookAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED24A0, void, set_MoonSetupVisuals, app::SnapTrapHookAnimator* this_ptr, app::IMoonSetupVisuals* value)
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::ITimelineEntity*, get_IdleVisualsTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B96C0, app::ITimelineEntity*, get_WarnVisualsTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C89860, app::ITimelineEntity*, get_ClosingVisualsTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C89880, app::ITimelineEntity*, get_ClosedLoopVisualsTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED2570, app::ITimelineEntity*, get_VisualChewingVisualsTimelinesOpenTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED2590, app::ITimelineEntity*, get_OpeningAfterMissedVisualsTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED25B0, app::ITimelineEntity*, get_OpeningAfterCaughtVisualsTimeline, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::SnapTrapHookAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::SnapTrapHookAnimator* this_ptr)
} // namespace app::classes::SnapTrapHookAnimator
