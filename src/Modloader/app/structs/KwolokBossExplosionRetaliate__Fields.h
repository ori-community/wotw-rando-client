#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_DEFINED
struct Transform;
struct GameObject;
struct MoonTimeline;
struct EventTriggerAnimator;
struct KwolokBossExplosionRetaliate__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* TransformToFollow;
    struct GameObject* ExplosionPrefab;
    struct MoonTimeline* ExplosionAnticipationTimeline;
    struct EventTriggerAnimator* ExplosionTrigger;
    bool DrawGizmo;
    struct Bounds m_bounds;
    float m_insideTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossExplosionRetaliate__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossExplosionRetaliate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossExplosionRetaliate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
