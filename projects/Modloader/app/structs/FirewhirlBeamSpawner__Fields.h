#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_DEFINED
struct GameObject;
struct Event_1;
struct List_1_FirewhirlBeam_;
struct List_1_UnityEngine_Rect_;
struct EventTriggerAnimator;
struct MoonBool;
struct MoonReference_1_UnityEngine_Transform_;
struct MoonReference_1_Entity_;
struct Transform;
struct List_1_UnityEngine_GameObject_;
struct FirewhirlBeamSpawner__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct GameObject* FirewhirlBeamPrefab;
    int32_t PrewarmAmount;
    float DistanceBetweenBeams;
    float BeamsPerSecond;
    float MaxDistanceToGround;
    int32_t BeamCount;
    float AirBeamSinkDistance;
    float HitsPerSecond;
    float DamageAmount;
    DamageWeight__Enum m_damageWeight;

    AbilityType__Enum DamageAbilityType;

    DamageLayerMask__Enum DamageLayerMask;

    struct Event_1* StartCastingEvent;
    struct Event_1* StopCastingEvent;
    struct ArtificialSoundHostReference m_soundHost;
    bool m_castSoundRunning;
    float m_delayTillNextHit;
    struct List_1_FirewhirlBeam_* m_beams;
    struct List_1_UnityEngine_Rect_* m_beamRectangles;
    struct Vector3 m_burstPosition;
    struct Vector3 m_direction;
    int32_t m_remainingBursts;
    float m_nextBurstRemainingTime;
    struct EventTriggerAnimator* DamageTrigger;
    struct MoonBool* ShouldSpawn;
    struct MoonReference_1_UnityEngine_Transform_* AreaDamageSpawnReference;
    struct MoonReference_1_Entity_* Owner;
    bool ReverseDirection;
    struct LayerMask StopLayerMask;
    float BeamAnimationSpeed;
    float BeamHeight;
    struct Transform* LightTranform;
    float LigthSizeOffset;
    bool DebugSpawnPosition;
    bool m_debugHasStartSpawnPoint;
    struct Vector3 m_debugOriginPosition;
    struct Vector3 m_debugStartSpawnPosition;
    int32_t m_damageID;
    bool m_lastBeamInAir_NOTUSED;
    float MaxClimbHeight;
    float MaxFallHeight;
    struct List_1_UnityEngine_GameObject_* m_dealtDamageToObjects;
    bool m_isPlayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_FirewhirlBeam_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonReference_1_Entity_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FirewhirlBeamSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/FirewhirlBeamSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FirewhirlBeamSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
