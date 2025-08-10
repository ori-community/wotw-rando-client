#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour.h>
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KamikazeSkeetoDiveAttackBehaviour {
    IL2CPP_REGISTER_METHOD(
        0x00E5BF60,
        app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum,
        get_State,
        app::KamikazeSkeetoDiveAttackBehaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00E5BF70, app::Entity*, get_Owner, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5BFF0, app::SkeetoLocomotion*, get_Locomotion, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C0D0, app::Vector3, get_PegCheckOrigin, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C1E0, app::Vector3, get_PegCheckDirection, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C370, app::Vector3, get_TargetPosition, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005DC410, float, get_InitialDirection, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C520, void, set_InitialDirection, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00E5C530, void, ForceAttackDirection, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, app::Vector2 force)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C670, bool, ShouldPauseLocomotion, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C680, void, OnEntityInitialized, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5C740, void, OnEnter, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E5CDB0, app::BehaviourStatus__Enum, OnExecute, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E5CE70, void, OnExit, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x00E5D410,
        void,
        ChangeState,
        app::KamikazeSkeetoDiveAttackBehaviour* this_ptr,
        app::KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x00E5D780, void, OnEnterFlipTowardsTarget, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, UpdateFlipTowardsTarget, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5D9F0, void, OnExitFlipTowardsTarget, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5DA50, void, OnEnterAnticipation, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5DE00, app::BehaviourStatus__Enum, UpdateAnticipation, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5E460, void, OnExitAnticipation, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E5E4B0,
        void,
        AnticipationAnimatorOnOnProcessRootMotion,
        app::KamikazeSkeetoDiveAttackBehaviour* this_ptr,
        app::Vector3 root_velocity
    )
    IL2CPP_REGISTER_METHOD(0x00E5E5E0, void, OnEnterAttack, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5EAE0, app::BehaviourStatus__Enum, UpdateAttack, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5EDB0, void, OnExitAttack, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5EDE0, void, OnEnterPegged, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5F100, app::BehaviourStatus__Enum, UpdatePegged, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5F370, void, OnExitPegged, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5F3A0, void, OnBashEnter, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5F3B0, void, UpdateDebugDamage, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5F770, bool, CheckIfPegged, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E5FAE0, void, OnExplodeTriggerEnter, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, app::Collider* obj)
    IL2CPP_REGISTER_METHOD(0x00E5FEE0, bool, HasClearanceToAttack, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr, app::Vector3 offset_to_target)
    IL2CPP_REGISTER_METHOD(0x00E601D0, void, OnDrawGizmos, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnInterrupted, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E603D0, void, ctor, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E604C0, void, _OnEnterFlipTowardsTarget_b__58_0, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E60500, void, _OnEnterFlipTowardsTarget_b__58_1, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E60510, void, _OnEnterAnticipation_b__61_0, app::KamikazeSkeetoDiveAttackBehaviour* this_ptr)
} // namespace app::classes::KamikazeSkeetoDiveAttackBehaviour
