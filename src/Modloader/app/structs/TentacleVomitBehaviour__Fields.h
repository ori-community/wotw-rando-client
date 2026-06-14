#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_TentacleEntity___Fields.h>
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_TentacleEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED)
#define IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_DEFINED
struct ProjectileSpawner;
struct MoonTimeline;
struct EventTriggerAnimator;
struct FloatAnimator;
struct FloatAnimationParameter;
struct GameObject;
struct TentacleVomitBehaviour__Fields {
    struct EntityBehaviourNode_1_TentacleEntity___Fields _;
    struct ProjectileSpawner* ProjectileSpawner;
    struct MoonTimeline* VomitTimeline;
    struct EventTriggerAnimator* VomitSection;
    struct FloatAnimator* DirectionAnimator;
    struct FloatAnimator* AnimationAlignmentAnimator;
    struct FloatAnimationParameter* DirectionParameter;
    float ProjectileInterval;
    struct GameObject* CreepPrefab;
    float m_timer;
    bool m_isVomiting;
    bool m_upsidedown;
    struct TentacleAnimatedSettings m_originalSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#endif
#undef IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleVomitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleVomitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleVomitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
