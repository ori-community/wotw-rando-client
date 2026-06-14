#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForKeyTimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForKeyTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity_DEFINED)
#include <Modloader/app/structs/WaitForKeyTimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForKeyTimelineEntity_DEFINED
struct WaitForKeyTimelineEntity__Class;
struct WaitForKeyTimelineEntity {
    struct WaitForKeyTimelineEntity__Class* klass;
    MonitorData* monitor;
    struct WaitForKeyTimelineEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitForKeyTimelineEntity_FWDDECL
#include <Modloader/app/structs/WaitForKeyTimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForKeyTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity_FWDDECL)
#include <Modloader/app/structs/WaitForKeyTimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForKeyTimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
