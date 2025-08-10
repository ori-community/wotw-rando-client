#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossEscapeBehaviour.h>

namespace app::classes::SpiderBossEscapeBehaviour {
    IL2CPP_REGISTER_METHOD(0x011ABC60, bool, get_IsAttacking, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011ABD40, void, Start, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011ABEE0, void, OnDestroy, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AC080, void, OnPreRestoreCheckpoint, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AC150, void, OnEnterTask, app::SpiderBossEscapeBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011AC2D0, void, AddEventCallbacks, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011ACA50, void, RemoveEventCallbacks, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD1D0, app::BehaviourStatus__Enum, OnExecuteTask, app::SpiderBossEscapeBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011AD550, void, UpdateLogic, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD610, void, OnExitTask, app::SpiderBossEscapeBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011AC080, void, StopAllTimelines, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD700, void, StartHitTransition, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD880, void, StartLoop, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD8B0, void, StartChase, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD900, void, ContinueToTopTrunk, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, ShouldPauseLocomotion, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD880, void, OnSpiderTransitionTimelineEnded, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD900, void, OnSpiderEscapeToMidTimelineEnded, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD970, void, OnSpiderEscapeToTopTimelineEnded, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AD980, void, OnCollapseArenaEvent, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011ADAD0, void, OnCollapseMidTrunkEvent, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011ADC40, void, OnCollapseTopTrunkEvent, app::SpiderBossEscapeBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011ADDB0, void, SetSpeedToAnimations, app::SpiderBossEscapeBehaviour* this_ptr, float speed)
    IL2CPP_REGISTER_METHOD(0x011ADF10, void, ctor, app::SpiderBossEscapeBehaviour* this_ptr)
} // namespace app::classes::SpiderBossEscapeBehaviour
