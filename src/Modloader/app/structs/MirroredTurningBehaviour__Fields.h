#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/MirroredTurningBehaviour_State__Enum.h>
#include <Modloader/app/structs/TurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MirroredTurningBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct MirroredTurningBehaviour__Fields {
    struct TurningBehaviour__Fields _;
    struct LegacyTimelineSequence* TurningStart;
    struct LegacyTimelineSequence* TurningEnd;
    float m_lookDirection;
    MirroredTurningBehaviour_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#endif
#undef IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MirroredTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MirroredTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirroredTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
