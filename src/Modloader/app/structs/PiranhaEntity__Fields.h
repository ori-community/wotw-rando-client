#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PiranhaEntity__Fields_DEFINED
struct GameObject;
struct Transform;
struct SwimmingLocomotion;
struct PiranhaEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Vector3 WaterCheckOffset;
    float BashKickbackForce;
    float HitKickbackForce;
    float StopFollowingDelay;
    float StunTime;
    struct GameObject* TrailFXPrefab;
    struct Transform* TrailFXHolder;
    float m_followDelay;
    float m_stunTime;
    struct SwimmingLocomotion* m_swimmingLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaEntity__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PiranhaEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaEntity__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
