#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_DEFINED
struct MoonTimeline;
struct StaticEntityGenericTurningBehaviour__Fields {
    struct BaseLocomotionTurningBehaviour__Fields _;
    struct MoonTimeline* m_leftToRight;
    struct MoonTimeline* m_rightToLeft;
    float m_targetLookDirectionX;
    float m_currentTurningDirection;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaticEntityGenericTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/StaticEntityGenericTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticEntityGenericTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
