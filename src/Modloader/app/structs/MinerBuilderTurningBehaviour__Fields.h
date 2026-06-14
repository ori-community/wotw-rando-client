#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/TurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct MinerBuilderTurningBehaviour__Fields {
    struct TurningBehaviour__Fields _;
    struct LegacyTimelineSequence* turningSequence;
    float m_lookDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#endif
#undef IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerBuilderTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MinerBuilderTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBuilderTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
