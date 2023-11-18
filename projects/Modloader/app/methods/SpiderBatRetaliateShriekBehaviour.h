#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBatRetaliateShriekBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEntityBehaviour.h>

namespace app::classes::SpiderBatRetaliateShriekBehaviour {
    IL2CPP_REGISTER_METHOD(0x0095F720, void, OnEnter, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0095F9B0, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0095F9D0, void, OnExit, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0095FC80, void, OnEndTurningBehaviourEvent, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IEntityBehaviour* behaviour, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x0095FC90, void, StartTimeline, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095FE60, void, OnTimelineSequenceStopEvent, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00960060, void, Shoot, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009603D0, void, ctor, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
} // namespace app::classes::SpiderBatRetaliateShriekBehaviour
