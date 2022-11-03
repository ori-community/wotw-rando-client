#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossLocationTurnTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B2BE0, app::String*, get_Info, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B5C80, app::SpiderBossLocationZone__Enum, get_StartZone, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B5C80, app::SpiderBossLocationZone__Enum, GetForcedAnimationZone, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B2D10, void, OnEnter, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B2F50, void, InitializeCancellableController, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B3000, void, InitializeHitReactionController, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B30B0, void, PlayTimeline, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x011B30F0, void, PlayStartTimeline, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B32D0, void, PlayEndTimeline, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B3490, void, ForceZoneOnAnimationPlayer, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr, app::MoonTimeline* timeline, app::SpiderBossLocationZone__Enum zone))
    IL2CPP_REGISTER_METHOD(0x011B3700, void, OnStartTimelineEnded, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777B08, SpiderBossLocationTurnTimelineBehaviour_OnStartTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B90C0, void, OnCanFinishEnd, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D2F840, void, OnCanFinishStart, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B3710, void, OnProcessRootMotion, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHODINFO(0x04712408, SpiderBossLocationTurnTimelineBehaviour_OnProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011B37E0, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B3940, void, OnExit, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B3CF0, void, ctor, (app::SpiderBossLocationTurnTimelineBehaviour * this_ptr))
} // namespace app::classes::SpiderBossLocationTurnTimelineBehaviour
