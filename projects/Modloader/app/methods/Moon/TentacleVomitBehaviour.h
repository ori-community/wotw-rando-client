#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleVomitBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Moon::TentacleVomitBehaviour {
    IL2CPP_REGISTER_METHOD(0x010BBB10, void, OnEnter, (app::TentacleVomitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BBD00, void, PlayTimeline, (app::TentacleVomitBehaviour * this_ptr, app::MoonTimeline* timeline, app::EventTriggerAnimator* vomit_section))
    IL2CPP_REGISTER_METHOD(0x010BBEB0, void, OnVomitSectionActive, (app::TentacleVomitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010BBF50, app::BehaviourStatus__Enum, OnExecute, (app::TentacleVomitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BC230, void, OnExit, (app::TentacleVomitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010BC270, void, SpawnProjectile, (app::TentacleVomitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010BC730, void, OnProjectileCollision, (app::TentacleVomitBehaviour * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::TentacleVomitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010BC9E0, void, ctor, (app::TentacleVomitBehaviour * this_ptr))
} // namespace app::classes::Moon::TentacleVomitBehaviour
