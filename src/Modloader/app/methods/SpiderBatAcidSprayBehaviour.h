#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEntityBehaviour.h>
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour.h>

namespace app::classes::SpiderBatAcidSprayBehaviour {
    IL2CPP_REGISTER_METHOD(0x00953E70, void, OnEnter, app::SpiderBatAcidSprayBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00954170, app::BehaviourStatus__Enum, OnExecute, app::SpiderBatAcidSprayBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00954230, void, OnExit, app::SpiderBatAcidSprayBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00954540, void, StartShoot, app::SpiderBatAcidSprayBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00954550, void, StopShoot, app::SpiderBatAcidSprayBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00954560,
        void,
        OnEndTurningBehaviourEvent,
        app::SpiderBatAcidSprayBehaviour* this_ptr,
        app::IEntityBehaviour* behaviour,
        app::EntityBehaviourStatus__Enum reason
    )
    IL2CPP_REGISTER_METHOD(0x00954570, void, StartTimeline, app::SpiderBatAcidSprayBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00954740, void, OnTimelineSequenceStopEvent, app::SpiderBatAcidSprayBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00954940, void, Shoot, app::SpiderBatAcidSprayBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00955230, void, ctor, app::SpiderBatAcidSprayBehaviour* this_ptr)
} // namespace app::classes::SpiderBatAcidSprayBehaviour
