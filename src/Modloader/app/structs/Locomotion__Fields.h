#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Locomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Locomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector2__DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_Locomotion__Fields_DEFINED
struct Entity;
struct LocomotionContext;
struct CharacterPlatformMovement;
struct Rigidbody;
struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_;
struct EntityLocomotionTask;
struct StateMachine_2;
struct TransitionManager_1;
struct Dictionary_2_System_Int32_RootMotionProcessor_;
struct Queue_1_RootMotionProcessor_;
struct Locomotion__Fields {
    struct MonoBehaviour__Fields _;
    bool UseStateMachine;
    float _TraversalTier_k__BackingField;
    struct Nullable_1_UnityEngine_Vector3_ _ReplacementRegisteredPoint_k__BackingField;
    struct Entity* m_entity;
    bool m_isNPC;
    struct LocomotionContext* m_locomotionContext;
    struct CharacterPlatformMovement* m_platformMovement;
    bool m_hasPlatformMovement;
    struct Rigidbody* m_rigidbody;
    struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_* m_locomotionBehaviours;
    struct EntityLocomotionTask* m_currentBehaviour;
    struct Nullable_1_UnityEngine_Vector3_ m_registeredPoint;
    struct Nullable_1_UnityEngine_Vector2_ m_registeredDirection;
    bool m_executingLocomotionBehaviour;
    int32_t m_frameCountForReset;
    struct StateMachine_2* m_stateMachine;
    struct TransitionManager_1* m_transManager;
    struct Dictionary_2_System_Int32_RootMotionProcessor_* m_rootMotionProcessors;
    struct Queue_1_RootMotionProcessor_* m_rootMotionProcessorPool;
    struct Rect m_bounds;
    bool m_isPrewarmed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Locomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_Locomotion__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_RootMotionProcessor_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/LocomotionContext.h>
#include <Modloader/app/structs/MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_.h>
#include <Modloader/app/structs/Queue_1_RootMotionProcessor_.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/TransitionManager_1.h>
#endif
#undef IL2CPP_STRUCT_Locomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Locomotion__Fields_FWDDECL)
#include <Modloader/app/structs/Locomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Locomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
