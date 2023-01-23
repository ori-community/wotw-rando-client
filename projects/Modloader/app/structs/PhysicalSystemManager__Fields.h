#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemManager__Fields_DEFINED
struct PhysicalSystemState;
struct PhysicalSystemState__Array;
struct FrustumOptimizable;
struct TimeSlicedRigidbodyTask;
struct SceneRoot;
struct ApplyTurbulentForce__Array;
struct Component_1__Array;
struct PhysicsUpdateHandlerManager;
struct List_1_RigidbodyState_;
struct RigidbodyState__Array;
struct AnimationCurve;
struct String;
struct Transform;
struct ICameraFrustumSuspendable__Array;
struct Renderer__Array;
struct List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_;
struct List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_;
struct PhysicalSystemManager__Fields {
    struct GuidOwner__Fields _;
    struct PhysicalSystemState* m_originalState;
    struct PhysicalSystemState* m_lastState;
    struct PhysicalSystemState__Array* m_systemStates;
    int32_t RestoreStateGUID;
    struct FrustumOptimizable* TightFrustumBounds;
    bool UseTightFrustumBounds;
    bool RecalculateMeshBounds;
    struct Rect LocalBoundingBox;
    bool UseLocalCoordinates;
    bool saveLastState;
    bool useTimeslice;
    bool resetXYRotations;
    int32_t resetBodiesRotationsXYPerFrame;
    bool resetZ;
    bool lockBounds;
    bool useDebug;
    bool m_awakeCalled;
    bool m_disableCalled;
    bool m_startCalled;
    bool m_loadedBeforeStart;
    bool m_enabledCalled;
    int32_t m_sleepTime;
    int64_t m_lastFixedNs;
    struct TimeSlicedRigidbodyTask* m_timesliceTask;
    struct SceneRoot* m_root;
    bool m_bodiesDisabled;
    bool m_timeslice;
    struct Bounds m_cachedBoundingBox;
    bool m_isInsideFrustum;
    bool m_isSuspended;
    bool m_suspendedApplied;
    struct ApplyTurbulentForce__Array* m_applyTurbulentForces;
    struct Component_1__Array* m_suspendables;
    struct Component_1__Array* m_updateHandlerComponents;
    struct PhysicsUpdateHandlerManager* handlers;
    bool broken;
    bool active;
    int32_t m_oldInstanceId;
    bool m_oldInstanceIdSaved;
    struct Vector3 m_oldPosition;
    bool m_oldPositionSaved;
    struct List_1_RigidbodyState_* m_dynamicRigidBodyStates;
    struct Vector3 m_rootShift;
    struct LayerMask debrisLayer;
    struct RigidbodyState__Array* m_cachedRigidbodyStates;
    bool ShouldUseMoonFlags;
    bool UseInitialSlowdown;
    struct AnimationCurve* InitialSlowdownDamp;
    float m_unsuspendedTime;
    struct String* ApplyStateAfterUnsuspend;
    bool m_shouldApplyStateAfterUnsuspend;
    struct Transform* BackupCollider;
    bool m_haveRigidbodiesBeenFrozen;
    struct ICameraFrustumSuspendable__Array* m_frustumSuspendables;
    struct Renderer__Array* m_cachedRenderers;
    struct List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_* m_postEnabledObservers;
    struct List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_* m_preDisableObservers;
    bool m_preEnableCalled;
    SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;

    int32_t m_suspendedSpriteRefreshCount;
    bool m_needsToRegister;
    bool m_hasUpdatedOnce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemManager__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/ApplyTurbulentForce__Array.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/FrustumOptimizable.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array.h>
#include <Modloader/app/structs/List_1_Moon_TimeSlicer_ITimeSlicedPostEnableObserver_.h>
#include <Modloader/app/structs/List_1_Moon_TimeSlicer_ITimeSlicedPreDisableObserver_.h>
#include <Modloader/app/structs/List_1_RigidbodyState_.h>
#include <Modloader/app/structs/PhysicalSystemState.h>
#include <Modloader/app/structs/PhysicalSystemState__Array.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerManager.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/RigidbodyState__Array.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSlicedRigidbodyTask.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemManager__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
