#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimelineSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence_DEFINED)
#include <Modloader/app/structs/LegacyTimelineSequence__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyTimelineSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyTimelineSequence_DEFINED
struct LegacyTimelineSequence__Class;
struct LegacyTimelineSequence {
    struct LegacyTimelineSequence__Class* klass;
    MonitorData* monitor;
    struct LegacyTimelineSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimelineSequence_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineSequence_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimelineSequence_FWDDECL)
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
