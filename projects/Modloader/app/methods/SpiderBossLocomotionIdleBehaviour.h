#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MirroredTimelineSet.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour.h>

namespace app::classes::SpiderBossLocomotionIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B5740, app::MoonTimeline*, GetIdleAnimation, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::SpiderBossLocationZone__Enum location_zone))
    IL2CPP_REGISTER_METHOD(0x011B5800, bool, IsPlayingRightTimeline, (app::SpiderBossLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugPlayingTimelines, (app::SpiderBossLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B5950, void, EnsureCorrectIdleIsPlaying, (app::SpiderBossLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B5BA0, void, ResetIdle, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::SpiderBossLocationZone__Enum zone))
    IL2CPP_REGISTER_METHOD(0x011B5C40, void, SwapIdle, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::SpiderBossLocationZone__Enum zone, app::MirroredTimelineSet* timelines))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B5C70, void, OnInitializeTask, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B5DE0, void, OnEnterTask, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B6050, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B62B0, void, OnExitTask, (app::SpiderBossLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::SpiderBossLocomotionIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::SpiderBossLocomotionIdleBehaviour * this_ptr))
} // namespace app::classes::SpiderBossLocomotionIdleBehaviour
