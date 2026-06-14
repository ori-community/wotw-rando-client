#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WaterFall__Fields_DEFINED
struct LineRenderer;
struct ParticleSystem;
struct AmbienceZone;
struct LegacyPointAmbienceZone;
struct List_1_Moon_WaterFall_WaterLine_;
struct Collider;
struct List_1_UnityEngine_Rigidbody_;
struct HashSet_1_Moon_ISuspendable_;
struct WaterFall__Fields {
    struct MonoBehaviour__Fields _;
    float MaxLength;
    float LineWidth;
    int32_t Width;
    struct Vector3 Gravity;
    struct Vector3 GravityAffectingRigidbodies;
    float GravityAffectingOri;
    struct LayerMask InteractionMask;
    float ImpactPadding;
    struct LayerMask ImpactPaddingMask;
    struct LineRenderer* WaterLineRenderer;
    struct ParticleSystem* SplashParticles;
    struct ParticleSystem* ImpactParticles;
    float ImpactParticleBurstAmount;
    bool EnableDebug;
    struct AmbienceZone* WaterFallingAmbienceZone;
    struct LegacyPointAmbienceZone* WaterImpactAmbienceZone;
    struct List_1_Moon_WaterFall_WaterLine_* m_waterLines;
    struct List_1_Moon_WaterFall_WaterLine_* m_newWaterLines;
    struct List_1_Moon_WaterFall_WaterLine_* m_awakeHack;
    struct RaycastHit m_hitInfo;
    struct RaycastHit m_bottomHitInfo;
    float m_lastHitDistance;
    struct Collider* m_lastHitCollider;
    struct List_1_UnityEngine_Rigidbody_* m_affectedRigidbodies;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    bool m_insideFrustum;
    bool _InsideFrustum_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFall__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterFall__Fields_FWDDECL
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/LegacyPointAmbienceZone.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_Moon_WaterFall_WaterLine_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rigidbody_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_WaterFall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterFall__Fields_FWDDECL)
#include <Modloader/app/structs/WaterFall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
