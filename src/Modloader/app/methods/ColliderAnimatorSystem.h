#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ColliderAnimatorSystem.h>
#include <Modloader/app/structs/ColliderAnimatorSystem_SphereColliderAnimationState.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/SphereColliderAnimator_AnimationMode__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::ColliderAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x012CE280, app::ColliderAnimatorSystem*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsRunning, app::ColliderAnimatorSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsRunning, app::ColliderAnimatorSystem* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ExecutionOrder, app::ColliderAnimatorSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012CE550,
        void,
        SubmitColliderRadius,
        app::ColliderAnimatorSystem* this_ptr,
        app::Collider* collider,
        float radius,
        app::SphereColliderAnimator_AnimationMode__Enum mode
    )
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::ColliderAnimatorSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012CE7F0, void, OnUpdate, app::ColliderAnimatorSystem* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x012CE9D0, app::ColliderAnimatorSystem_SphereColliderAnimationState*, GetStateFromPool, app::ColliderAnimatorSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012CEB50,
        void,
        ReturnStateToPool,
        app::ColliderAnimatorSystem* this_ptr,
        app::ColliderAnimatorSystem_SphereColliderAnimationState* state
    )
    IL2CPP_REGISTER_METHOD(0x012CEC10, void, ApplySphereColliderRadius, app::SphereCollider* collider, float radius)
    IL2CPP_REGISTER_METHOD(0x012CECE0, void, ctor, app::ColliderAnimatorSystem* this_ptr)
} // namespace app::classes::ColliderAnimatorSystem
