#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TentacleStabBehaviour.h>

namespace app::classes::Moon::TentacleStabBehaviour {
    IL2CPP_REGISTER_METHOD(0x010B7740, app::Enum__Array*, GetEntries, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B77E0, app::Enum, Evaluate, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B78E0, void, OnEntityInitialized, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B7910, void, OnEnter, app::TentacleStabBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010B8750, void, LockTarget, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8890, void, UnLockTarget, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B88C0, void, ContinueFollow, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8960, void, ContinueFollowMiss, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8A00, void, Stick, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8DA0, void, UnStick, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8EA0, void, OnMissEnd, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8F90, void, TimelineStop, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B8FF0, app::BehaviourStatus__Enum, OnExecute, app::TentacleStabBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010BA1E0, void, OnExit, app::TentacleStabBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BACA0, void, OnDrawGizmos, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BAD70, void, ctor, app::TentacleStabBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010BAE30, void, cctor, )
} // namespace app::classes::Moon::TentacleStabBehaviour
