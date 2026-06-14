#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockableLaser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockableLaser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockableLaser__Fields_DEFINED)
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BlockableLaser__Fields_DEFINED
struct LaserBeam;
struct Transform;
struct DamageOwner;
struct RaycastHit__Array;
struct MoonTimeline;
struct SoundHost;
struct Collider__Array;
struct List_1_UnityEngine_Collider_;
struct Collider;
struct List_1_UnityEngine_ParticleSystem_;
struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_;
struct TextureTilingAdjuster__Array;
struct SoundPlayer;
struct GameObject;
struct BlockableLaser__Fields {
    struct GuidOwner__Fields _;
    bool OptimizeStaticSetupAndOri;
    float LaserMaxDistance;
    struct LayerMask BlockingLayers;
    struct Vector3 LaserDirection;
    float LaserBeamForce;
    bool CanBeBlockedByEnemies;
    struct LaserBeam* LaserBeam;
    struct Transform* BeamRotationPivot;
    struct DamageOwner* DamageOwner;
    struct RaycastHit__Array* m_hits;
    float LaserActiveOffscreenPadding;
    float BurstSpawnOffcreenPadding;
    float MinScaleToDealDamage;
    float MinScaleToSpawnImpactFX;
    float DamagingRadius;
    bool m_inSand;
    struct MoonTimeline* LoopingVFX;
    struct SoundHost* m_soundHost;
    struct ArtificialSoundHostReference m_laserLoopSoundHost;
    struct ArtificialSoundHostReference m_impactSoundHost;
    uint32_t m_laserLoopEventPlayingID;
    uint32_t m_laserImpactLoopEventPlayingID;
    struct Collider__Array* m_ignoredColliders;
    struct List_1_UnityEngine_Collider_* RuntimeIgnoredColliders;
    struct Collider* m_damageCollider;
    struct Collider* SocketDamageCollider;
    float m_originalScaleX;
    int32_t m_sphereCastClientID;
    bool m_impactFxTriggerEnabled;
    struct List_1_UnityEngine_ParticleSystem_* s_particleSystemList;
    struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_* m_ImpactEffectPerSurface;
    struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_* m_ImpactPointLoopEffectPerSurface;
    struct Vector3 m_transformedLaserDirection;
    struct RaycastHit m_cachedEnvHit;
    bool m_cachedEnvHitValid;
    float _CurrentLaserLength_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct TextureTilingAdjuster__Array* m_laserBeamTilingAdjusters;
    bool m_activated;
    bool m_isSuspended;
    struct SoundPlayer* m_loopSoundPlayer;
    struct Collider* m_previousHitCollider;
    struct Vector3 m_lastImpactPosition;
    struct GameObject* m_lastLaserImpactLoopEffectPrefab;
    struct GameObject* m_laserImpactLoopEffect;
    struct GameObject* m_laserImpactPointLight;
    bool m_wasVisibleOnScreen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlockableLaser__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlockableLaser__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LaserBeam.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/TextureTilingAdjuster__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BlockableLaser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockableLaser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlockableLaser__Fields_FWDDECL)
#include <Modloader/app/structs/BlockableLaser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockableLaser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
