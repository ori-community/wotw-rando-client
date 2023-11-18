#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBatSpitBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEntityBehaviour.h>

namespace app::classes::SpiderBatSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x009608C0, void, OnBehaviourTreeInitialize, (app::SpiderBatSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00960960, void, OnEnter, (app::SpiderBatSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00960D80, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBatSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00960DA0, void, OnExit, (app::SpiderBatSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00961180, void, OnEndTurningBehaviourEvent, (app::SpiderBatSpitBehaviour * this_ptr, app::IEntityBehaviour* behaviour, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00961190, void, StartTimeline, (app::SpiderBatSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00961360, void, OnTimelineSequenceStopEvent, (app::SpiderBatSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00961510, void, Shoot, (app::SpiderBatSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00961B70, void, ResolveDamage, (app::SpiderBatSpitBehaviour * this_ptr, app::Damage* damage_result))
    IL2CPP_REGISTER_METHOD(0x00961C50, void, ctor, (app::SpiderBatSpitBehaviour * this_ptr))
} // namespace app::classes::SpiderBatSpitBehaviour
