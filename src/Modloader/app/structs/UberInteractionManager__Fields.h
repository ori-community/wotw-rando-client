#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager__Fields_DEFINED
struct List_1_UberInteractionManager_InteractionCurve_;
struct List_1_UberInteractionActor_;
struct Boolean__Array;
struct IInteractable__Array;
struct UberInteractionManager_InteractionInfo__Array;
struct Stopwatch;
struct UberInteractionManagerAccelerator;
struct List_1_IInteractable_;
struct UberInteractionManager_ExplosionApplications;
struct List_1_UberInteractionManager_ActorInfo_;
struct List_1_UnityEngine_Vector3_;
struct ShaderAnimationTimeDriver;
struct UberInteractionManager_ExplosionApplicationComparer;
struct UberInteractionManager__Fields {
    struct MonoBehaviour__Fields _;
    bool DoInteractions;
    struct List_1_UberInteractionManager_InteractionCurve_* Curves;
    float MagnitudePower;
    float PlayDelayTime;
    float ExplosionProcessingBudgetMs;
    bool Debug;
    struct List_1_UberInteractionActor_* m_actors;
    struct Boolean__Array* m_interactorActive;
    struct IInteractable__Array* m_interactables;
    struct UberInteractionManager_InteractionInfo__Array* m_interactionInfos;
    struct Stopwatch* m_stopwatch;
    struct UberInteractionManagerAccelerator* m_accelerator;
    int64_t m_nextAcceleratorQueryId;
    bool m_acceleratorFullErrorPrinted;
    int32_t m_minBoundIndex;
    int32_t m_interactionCount;
    struct List_1_IInteractable_* m_toRegister;
    struct UberInteractionManager_ExplosionApplications* m_explosionApplications;
    struct List_1_UberInteractionManager_ActorInfo_* m_actorQueue;
    struct List_1_UberInteractionManager_ActorInfo_* m_resolveWaterQueue;
    struct List_1_UnityEngine_Vector3_* m_positions;
    struct List_1_UberInteractionManager_ActorInfo_* m_processingQueue;
    struct ShaderAnimationTimeDriver* m_timeDriver;
    struct UberInteractionManager_ExplosionApplicationComparer* m_explosionApplicationComparer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/IInteractable__Array.h>
#include <Modloader/app/structs/List_1_IInteractable_.h>
#include <Modloader/app/structs/List_1_UberInteractionActor_.h>
#include <Modloader/app/structs/List_1_UberInteractionManager_ActorInfo_.h>
#include <Modloader/app/structs/List_1_UberInteractionManager_InteractionCurve_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/ShaderAnimationTimeDriver.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplicationComparer.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplications.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager__Fields_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
