#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VerletStructure_IntegrationMethods__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_VerletStructure_IntegrationMethods__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_VerletStructure__Fields_DEFINED
struct Component_1__Array;
struct VerletStructure_VerletStructureState;
struct VerletStructure_VerletStructureState__Array;
struct MeshFilter;
struct CageStructureTool;
struct FloatAnimator;
struct VerletStructure_VerletJoint__Array;
struct VerletStructure_VerletLink__Array;
struct PhysicsUpdateHandlerManager;
struct VerletStructure__Fields {
    struct MonoBehaviour__Fields _;
    struct Component_1__Array* m_updateHandlerComponents;
    struct VerletStructure_VerletStructureState* m_originalState;
    struct VerletStructure_VerletStructureState__Array* m_states;
    int32_t RestoreStateGUID;
    struct MeshFilter* referenceVerletMesh;
    struct CageStructureTool* cageStructure;
    bool SkipFrames;
    VerletStructure_IntegrationMethods__Enum IntegrationMethod;

    float ForceMultiplier;
    int32_t iterationsCount;
    float friction;
    struct Vector3 frictionXYZ;
    float gravity;
    float tension;
    bool UpdateAutomatically;
    bool UpdateChildrenInPhysicsUpdate;
    bool LockUpdateHandlers;
    float maxJointSpeed;
    float wigglePressure;
    bool AllowZMotion;
    bool useTurbulence;
    struct Vector3 turbulenceForce;
    float turbulenceFrequency;
    float turbulenceMagnitude;
    float turbulenceOffset;
    struct Vector3 turbulencePositionVariationScale;
    bool UseWind;
    struct Vector3 WindForce;
    float WindTurbulence;
    float WindFrequency;
    bool UseClothWind;
    struct Vector3 ClothWindForce;
    float ClothWindForceMultiplier;
    float ClothWindTurbulence;
    float ClothWindFrequency;
    struct FloatAnimator* ClothWindAnimator;
    bool UseAnimatedForce;
    struct Vector3 AnimatedForce;
    struct FloatAnimator* AnimatedForceAnimator;
    struct FloatAnimator* AnimatedForceAngleAnimator;
    bool m_frameSkipped;
    struct Bounds LocalBounds;
    struct VerletStructure_VerletJoint__Array* joints;
    struct VerletStructure_VerletLink__Array* links;
    struct VerletStructure_VerletLink__Array* bendLinks;
    struct Component_1__Array* m_updateHandlers;
    struct Component_1__Array* m_autoUpdateHandlers;
    struct FloatAnimator* m_defaultWindClothAnimator;
    struct PhysicsUpdateHandlerManager* handlers;
    struct Bounds m_cachedBoundingBox;
    bool m_insideFrustum;
    bool m_isSuspended;
    SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;

    bool m_initialized;
    bool Disabled;
    float m_skippedTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerManager.h>
#include <Modloader/app/structs/VerletStructure_VerletJoint__Array.h>
#include <Modloader/app/structs/VerletStructure_VerletLink__Array.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructure__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
