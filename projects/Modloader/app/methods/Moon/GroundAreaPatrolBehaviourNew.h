#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::GroundAreaPatrolBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x0148AD80, void, OnEntityInitialized, (app::GroundAreaPatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148AED0, void, PlayIdle, (app::GroundAreaPatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148B1D0, app::Vector3, ProcessRootMotion, (app::GroundAreaPatrolBehaviourNew * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x0471D190, GroundAreaPatrolBehaviourNew_ProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0148B2F0, void, IdleFinished, (app::GroundAreaPatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04714478, GroundAreaPatrolBehaviourNew_IdleFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0148B530, float, GetIdleInverval, (app::GroundAreaPatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148B610, void, Start, (app::GroundAreaPatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148B6F0, void, OnEnter, (app::GroundAreaPatrolBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0148B830, void, SetTarget, (app::GroundAreaPatrolBehaviourNew * this_ptr, bool move_left))
    IL2CPP_REGISTER_METHOD(0x0148BC10, bool, MovingInPatrolDirection, (app::GroundAreaPatrolBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148BCB0, app::BehaviourStatus__Enum, OnExecute, (app::GroundAreaPatrolBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0148C090, void, OnExit, (app::GroundAreaPatrolBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144E510, void, ctor, (app::GroundAreaPatrolBehaviourNew * this_ptr))
} // namespace app::classes::Moon::GroundAreaPatrolBehaviourNew
