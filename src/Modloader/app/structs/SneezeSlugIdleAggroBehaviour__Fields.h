#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_DEFINED
struct TurningBehaviour;
struct LegacyTimelineSequence;
struct SneezeSlugEntity;
struct Locomotion;
struct SneezeSlugIdleAggroBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct TurningBehaviour* turnBehaviour;
    struct LegacyTimelineSequence* idleTimeline;
    struct SneezeSlugEntity* m_Entity;
    struct Locomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/SneezeSlugEntity.h>
#include <Modloader/app/structs/TurningBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugIdleAggroBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugIdleAggroBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugIdleAggroBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
