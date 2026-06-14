#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct FrogGroundLocomotion;
struct FrogFallReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* FallTimeline;
    bool InverseLookDirection;
    struct FrogGroundLocomotion* m_locomotion;
    bool m_startedFalling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/FrogGroundLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FrogFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
