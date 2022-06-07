#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SandWormSandDigLocomotionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C24D60, float, get_LastAvoidancePower, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::SandWormLocomotion *, get_Locomotion, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::SandWormEntity *, get_WormEntity, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C24D70, void, OnInitializeTask, (app::SandWormSandDigLocomotionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C25140, void, OnEnterTask, (app::SandWormSandDigLocomotionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C25150, app::BehaviourStatus__Enum, OnExecuteTask, (app::SandWormSandDigLocomotionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00C25940, void, UpdateSound, (app::SandWormSandDigLocomotionBehaviour * this_ptr, float angle_delta))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C25E10, app::Vector3, get_TargetPosition, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C25E30, void, set_TargetPosition, (app::SandWormSandDigLocomotionBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00C25E50, float, get_TraversalSpeed, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C25E60, void, set_TraversalSpeed, (app::SandWormSandDigLocomotionBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C25E70, app::SandWormSandDigLocomotionBehaviour_SpeedEntry, GetCurrentSpeedEntry, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C25FD0, bool, AvoidanceIgnoreCollider, (app::SandWormSandDigLocomotionBehaviour * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x04755A38, SandWormSandDigLocomotionBehaviour_AvoidanceIgnoreCollider__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C26070, void, OnDrawGizmos, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C26170, void, ctor, (app::SandWormSandDigLocomotionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C26210, void, cctor, ())
}
