#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_DEFINED
struct GameObject;
struct Transform;
struct List_1_UnityEngine_ParticleSystem_;
struct RotatingObstacleVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* DefaultImpactEffect;
    struct GameObject* DefaultImpactEffectLoop;
    struct LayerMask BlockingLayers;
    struct Transform* EffectSpawnPoint;
    struct GameObject* m_lastImpactEffectLoop;
    bool m_isLooping;
    struct Vector3 m_lastSpawnPosition;
    struct List_1_UnityEngine_ParticleSystem_* s_particleSystemList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RotatingObstacleVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/RotatingObstacleVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotatingObstacleVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
