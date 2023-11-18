#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirroredTimelineSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirroredTimelineSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroredTimelineSet_DEFINED)
#include <Modloader/app/structs/MirroredTimelineSet__Fields.h>
#if defined(IL2CPP_STRUCT_MirroredTimelineSet__Fields_DEFINED)
#define IL2CPP_STRUCT_MirroredTimelineSet_DEFINED
struct MirroredTimelineSet__Class;
struct MirroredTimelineSet {
    struct MirroredTimelineSet__Class* klass;
    MonitorData* monitor;
    struct MirroredTimelineSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirroredTimelineSet_FWDDECL)
#define IL2CPP_STRUCT_MirroredTimelineSet_FWDDECL
#include <Modloader/app/structs/MirroredTimelineSet__Class.h>
#endif
#undef IL2CPP_STRUCT_MirroredTimelineSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroredTimelineSet_DEFINED) && !defined(IL2CPP_STRUCT_MirroredTimelineSet_FWDDECL)
#include <Modloader/app/structs/MirroredTimelineSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirroredTimelineSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
