#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TentacleSpawnBehaviour.h>

namespace app::classes::Moon::TentacleSpawnBehaviour {
    IL2CPP_REGISTER_METHOD(0x010B4F20, app::MoonTimeline*, get_EffectiveSpawnTimeline, (app::TentacleSpawnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B4FD0, void, OnEnterTask, (app::TentacleSpawnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, TimelineStop, (app::TentacleSpawnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B5290, app::BehaviourStatus__Enum, OnExecuteTask, (app::TentacleSpawnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010B57C0, void, OnExitTask, (app::TentacleSpawnBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::TentacleSpawnBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B5A50, void, ctor, (app::TentacleSpawnBehaviour * this_ptr))
} // namespace app::classes::Moon::TentacleSpawnBehaviour
