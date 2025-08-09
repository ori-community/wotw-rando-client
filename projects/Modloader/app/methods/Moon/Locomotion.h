#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityOwnedInitOrder__Enum.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/Locomotion_StateTransitionEntry__Array.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RootMotionProcessor.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterfallIntersectionMode__Enum.h>

namespace app::classes::Moon::Locomotion {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawGizmos, )
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_TraversalTier, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_TraversalTier, app::Locomotion* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Nullable_1_UnityEngine_Vector3_, get_ReplacementRegisteredPoint, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_ReplacementRegisteredPoint, app::Locomotion* this_ptr, app::Nullable_1_UnityEngine_Vector3_ value)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_HasPlatformMovement, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::CharacterPlatformMovement*, get_PlatformMovement, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Entity*, get_Entity, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110A930, bool, get_ShouldReset, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006F4090, bool, get_IsMovingToTarget, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110A940, app::Vector2, get_GravityDirection, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110AA80, bool, get_IsBlocking, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::EntityOwnedInitOrder__Enum, get_InitOrder, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110AB60, app::Vector2, get_PreviusPositionForWaterfallInteraction, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110AC20, app::Vector2, get_PositionForWaterfallInteraction, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110AD00, app::Vector2, get_SpeedForWaterfallInteraction, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110AE90, void, set_SpeedForWaterfallInteraction, app::Locomotion* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0110AFF0, app::Rect, get_BoundsForWaterfallInteraction, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::WaterfallIntersectionMode__Enum, get_WaterfallIntersectionMode, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Rigidbody*, get_RigidbodyForWaterfallInteraction, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFlamable, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110B110, void, OnDestroy, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110B120, void, Finalize, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110B1B0, void, MoonCleanup, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110B290, void, Prewarm, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPrewarm, app::Locomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x0110B5F0, void, OnEntityInitialization, app::Locomotion* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110BA80, void, OnEnable, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110BB90, void, OnDisable, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0110BC40,
        void,
        ConfigureFSMState,
        app::Locomotion* this_ptr,
        app::EntityLocomotionTask* task,
        app::Locomotion_StateTransitionEntry__Array* transitions
    )
    IL2CPP_REGISTER_METHOD(0x0110C010, bool, BaseFSMExecutionCondition, app::Locomotion* this_ptr, app::EntityLocomotionTask* next_task)
    IL2CPP_REGISTER_METHOD(0x0110C110, void, GetEntity, app::Locomotion* this_ptr, app::Transform* obj)
    IL2CPP_REGISTER_METHOD(0x0110C2C0, void, OnEntityReset, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110C310, void, ResetLocomotion, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110C340, void, OnFixedUpdate, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110C350, void, UpdateLocomotionBehaviours, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110C860, void, PlayBehaviour, app::Locomotion* this_ptr, app::EntityLocomotionTask* behaviour, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x0110C8C0, void, StopAllLocomotionBehaviours_1, app::Locomotion* this_ptr, bool* all_interrupted, bool force_interrupt)
    IL2CPP_REGISTER_METHOD(0x0110CA90, void, StopAllLocomotionBehaviours_2, app::Locomotion* this_ptr, bool force_interrupt)
    IL2CPP_REGISTER_METHOD(
        0x0110CC60,
        void,
        StartRootMotion_1,
        app::Locomotion* this_ptr,
        app::RootMotionProcessorData* config_data,
        int32_t source_i_d,
        app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* motion_modifier
    )
    IL2CPP_REGISTER_METHOD(
        0x0110CE70,
        void,
        StartRootMotion_2,
        app::Locomotion* this_ptr,
        app::RootMotionProcessorData* config_data,
        app::MonoBehaviour* source,
        app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* motion_modifier
    )
    IL2CPP_REGISTER_METHOD(0x0110CFA0, void, EndRootMotion_1, app::Locomotion* this_ptr, int32_t source_i_d)
    IL2CPP_REGISTER_METHOD(0x0110D0E0, void, EndRootMotion_2, app::Locomotion* this_ptr, app::MonoBehaviour* source)
    IL2CPP_REGISTER_METHOD(0x0110D1D0, void, EndAllRootMotion, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110D410, app::RootMotionProcessor*, GetRootMotionProcessor, app::Locomotion* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0110D590, void, DisposeOfRootMotionProcessor, app::Locomotion* this_ptr, app::RootMotionProcessor* processor)
    IL2CPP_REGISTER_METHOD(0x0110D630, void, MoveToPoint, app::Locomotion* this_ptr, app::Vector3 point, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x0110D630, void, MoveInTheDirection, app::Locomotion* this_ptr, app::Vector2 direction, app::EntityBehaviourNode* source)
    IL2CPP_REGISTER_METHOD(0x0110D640, void, ctor, app::Locomotion* this_ptr)
} // namespace app::classes::Moon::Locomotion
