#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_DEFINED
struct WaterPoisonCloud;
struct AnimationCurve;
struct WaterPoisonCloudTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct WaterPoisonCloud* Cloud;
    float SpawnEveryDistance;
    struct AnimationCurve* VertexAlphaOverLifetime;
    float MinSize;
    float MaxSize;
    struct AnimationCurve* SizeOverLifetime;
    float BlobLifeTime;
    struct Vector3 m_lastPosition;
    bool m_spawnActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/WaterPoisonCloud.h>
#endif
#undef IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonCloudTrail__Fields_FWDDECL)
#include <Modloader/app/structs/WaterPoisonCloudTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonCloudTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
