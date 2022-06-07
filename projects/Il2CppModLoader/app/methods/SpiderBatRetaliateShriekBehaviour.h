#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderBatRetaliateShriekBehaviour {
    IL2CPP_REGISTER_METHOD(0x0095F720, void, OnEnter, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0095F9B0, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0095F9D0, void, OnExit, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0095FC80, void, OnEndTurningBehaviourEvent, (app::SpiderBatRetaliateShriekBehaviour * this_ptr, app::IEntityBehaviour * behaviour, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x0095FC90, void, StartTimeline, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095FE60, void, OnTimelineSequenceStopEvent, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047747B0, SpiderBatRetaliateShriekBehaviour_OnTimelineSequenceStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00960060, void, Shoot, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009603D0, void, ctor, (app::SpiderBatRetaliateShriekBehaviour * this_ptr))
}
