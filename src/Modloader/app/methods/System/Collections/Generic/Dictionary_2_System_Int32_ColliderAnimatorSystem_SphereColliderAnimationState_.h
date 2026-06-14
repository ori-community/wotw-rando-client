#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColliderAnimatorSystem_SphereColliderAnimationState.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_* this_ptr,
        int32_t key,
        app::ColliderAnimatorSystem_SphereColliderAnimationState** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_* this_ptr,
        int32_t key,
        app::ColliderAnimatorSystem_SphereColliderAnimationState* value
    )
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, app::Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_ColliderAnimatorSystem_SphereColliderAnimationState_
