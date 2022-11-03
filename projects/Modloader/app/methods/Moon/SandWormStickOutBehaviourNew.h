#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::SandWormStickOutBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00EC5520, void, OnEnter, (app::SandWormStickOutBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EC5790, app::BehaviourStatus__Enum, OnExecute, (app::SandWormStickOutBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EC63B0, void, OnExit, (app::SandWormStickOutBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EC6460, void, StickHeadOut, (app::SandWormStickOutBehaviourNew * this_ptr, app::Vector3 position, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SandWormStickOutBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC65B0, void, OnDrawGizmos, (app::SandWormStickOutBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC6790, void, ctor, (app::SandWormStickOutBehaviourNew * this_ptr))
} // namespace app::classes::Moon::SandWormStickOutBehaviourNew
