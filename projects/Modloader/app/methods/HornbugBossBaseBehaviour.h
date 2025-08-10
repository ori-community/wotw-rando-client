#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::HornbugBossBaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x00B6E7F0, app::GroundEntityLocomotion*, get_Locomotion, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6E890, app::Vector3, get_TargetPosition, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6E960, void, OnEnter, app::HornbugBossBaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B6EA80, app::BehaviourStatus__Enum, OnExecute, app::HornbugBossBaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B6EB50, void, OnExit, app::HornbugBossBaseBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B6ECA0, void, InitializeCancellableController, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6ECD0, bool, CanCancel, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968A10, void, InitializeHitReactionController, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968A40, bool, CanAccumulateHits, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00968A70, bool, CanHitReact, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6ED00, float, get_BehaviourUtility, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ITask*, get_Self, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6ED20, float, ComputeUtility, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyRootMotion, app::HornbugBossBaseBehaviour* this_ptr, app::Vector3* velocity)
    IL2CPP_REGISTER_METHOD(
        0x00B6EDC0,
        void,
        RegisterStartDelegate,
        app::HornbugBossBaseBehaviour* this_ptr,
        app::List_1_Moon_Timeline_EventTriggerAnimator_* triggers,
        app::Action* del
    )
    IL2CPP_REGISTER_METHOD(
        0x00B6EF40,
        void,
        UnregisterStartDelegate,
        app::HornbugBossBaseBehaviour* this_ptr,
        app::List_1_Moon_Timeline_EventTriggerAnimator_* triggers,
        app::Action* del
    )
    IL2CPP_REGISTER_METHOD(0x00B6F0C0, bool, get_Coolingdown, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6F160, void, ctor, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_1, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_2, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_3, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_4, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_5, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_6, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_7, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_8, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_9, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_10, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_11, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_12, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_13, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_14, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_15, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_16, app::HornbugBossBaseBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IMoonTypeResolver*, GetResolverForType_17, app::HornbugBossBaseBehaviour* this_ptr)
} // namespace app::classes::HornbugBossBaseBehaviour
