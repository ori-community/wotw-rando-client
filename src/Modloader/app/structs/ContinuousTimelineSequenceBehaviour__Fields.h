#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct ContinuousTimelineSequenceBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct LegacyTimelineSequence* LoopingTS;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#endif
#undef IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContinuousTimelineSequenceBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
