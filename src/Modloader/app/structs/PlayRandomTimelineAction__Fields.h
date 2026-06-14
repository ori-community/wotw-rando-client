#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_DEFINED
struct List_1_LegacyTimelineSequence_;
struct PlayRandomTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct List_1_LegacyTimelineSequence_* Timelines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LegacyTimelineSequence_.h>
#endif
#undef IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_FWDDECL)
#include <Modloader/app/structs/PlayRandomTimelineAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayRandomTimelineAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
