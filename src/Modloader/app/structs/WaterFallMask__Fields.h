#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFallMask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFallMask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMask__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WaterFallMask__Fields_DEFINED
struct ParticleSystem;
struct Event_1;
struct SoundHost;
struct AmbienceZone;
struct LegacyPointAmbienceZone;
struct List_1_Moon_WaterFallMask_WaterLineGroup_;
struct HashSet_1_Moon_IWaterfallInteractionAgent_;
struct List_1_Moon_IWaterfallInteractionAgent_;
struct List_1_UnityEngine_Renderer_;
struct Vector4__Array;
struct HashSet_1_Moon_ISuspendable_;
struct WaterFallMask__Fields {
    struct MonoBehaviour__Fields _;
    bool ExtinguishFlammables;
    float MaxLength;
    float Width;
    int32_t AmountOfLines;
    struct Vector2 Offset;
    struct Vector3 Gravity;
    struct Vector3 GravityAffectingRigidbodies;
    float GravityAffectingOri;
    struct ParticleSystem* StaticParticles;
    struct ParticleSystem* ImpactParticles;
    float ImpactParticleBurstAmount;
    struct Event_1* m_impactSoundLoop;
    struct SoundHost* m_impactSoundHost;
    struct WwiseEventSystem_SoundHandle m_impactSoundHandle;
    float VelocityInfluence;
    bool OrientParticlesTowardsVelocity;
    bool EditorTestMode;
    struct Rect EditorTestRect;
    struct AmbienceZone* WaterFallingAmbienceZone;
    struct LegacyPointAmbienceZone* WaterImpactAmbienceZone;
    struct List_1_Moon_WaterFallMask_WaterLineGroup_* m_waterLines;
    struct RaycastHit m_hitInfo;
    struct HashSet_1_Moon_IWaterfallInteractionAgent_* m_affectedAgents;
    struct List_1_Moon_IWaterfallInteractionAgent_* m_validAgents;
    struct List_1_UnityEngine_Renderer_* m_renderes;
    struct Vector4__Array* m_masksTransforms;
    float m_particleAngle;
    float m_particleAngleCooldown;
    struct Bounds m_bounds;
    struct Rect m_optimzationBoundsRect;
    bool m_boundsRecalculated;
    struct LayerMask m_dynamicLayerMask;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_isRegistered;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    bool m_insideFrustum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFallMask__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterFallMask__Fields_FWDDECL
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/HashSet_1_Moon_IWaterfallInteractionAgent_.h>
#include <Modloader/app/structs/LegacyPointAmbienceZone.h>
#include <Modloader/app/structs/List_1_Moon_IWaterfallInteractionAgent_.h>
#include <Modloader/app/structs/List_1_Moon_WaterFallMask_WaterLineGroup_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_WaterFallMask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterFallMask__Fields_FWDDECL)
#include <Modloader/app/structs/WaterFallMask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFallMask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
