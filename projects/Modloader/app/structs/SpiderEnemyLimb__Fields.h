#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderEnemyLimb__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderEnemyLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemyLimb__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderEnemyLimb__Fields_DEFINED
struct SpiderEnemy;
struct AnimationClip;
struct GameObject;
struct Transform;
struct SpiderEnemyLimb__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiderEnemy* Spider;
    struct AnimationClip* Clip;
    struct GameObject* Arm;
    struct Transform* Target;
    struct Transform* Pivot;
    float MinDistance;
    float MaxDistance;
    float Height;
    bool m_isGrounded;
    float m_currentTime;
    struct Vector3 m_startPosition;
    struct Vector3 m_targetPosition;
    bool Flip;
    struct Vector3 m_grabOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderEnemyLimb__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderEnemyLimb__Fields_FWDDECL
#include <Modloader/app/structs/AnimationClip.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpiderEnemy.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderEnemyLimb__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderEnemyLimb__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderEnemyLimb__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderEnemyLimb__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderEnemyLimb__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
