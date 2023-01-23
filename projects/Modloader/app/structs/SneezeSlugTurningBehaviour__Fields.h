#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/TurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct SneezeSlugEntity;
struct SneezeSlugTurningBehaviour__Fields {
    struct TurningBehaviour__Fields _;
    struct LegacyTimelineSequence* turningSequence;
    float animationSpeed;
    struct SneezeSlugEntity* m_Entity;
    float m_lookDirection;
    bool m_waitEndFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/SneezeSlugEntity.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
