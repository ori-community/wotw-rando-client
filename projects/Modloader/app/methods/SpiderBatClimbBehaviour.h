#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBatClimbBehaviour.h>

namespace app::classes::SpiderBatClimbBehaviour {
    IL2CPP_REGISTER_METHOD(0x009552D0, bool, ShouldClimb, app::SpiderBatClimbBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00955380, void, OnEnter, app::SpiderBatClimbBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009553C0, app::BehaviourStatus__Enum, OnExecute, app::SpiderBatClimbBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00955400, void, FixedUpdate, app::SpiderBatClimbBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009555D0, void, OnExit, app::SpiderBatClimbBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00955610, void, StartTimeline, app::SpiderBatClimbBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009557E0, void, OnTimelineSequenceStopEvent, app::SpiderBatClimbBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009559A0, void, ctor, app::SpiderBatClimbBehaviour* this_ptr)
} // namespace app::classes::SpiderBatClimbBehaviour
