#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartTimelineOnAwake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartTimelineOnAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartTimelineOnAwake_DEFINED)
#include <Modloader/app/structs/StartTimelineOnAwake__Fields.h>
#if defined(IL2CPP_STRUCT_StartTimelineOnAwake__Fields_DEFINED)
#define IL2CPP_STRUCT_StartTimelineOnAwake_DEFINED
struct StartTimelineOnAwake__Class;
struct StartTimelineOnAwake {
    struct StartTimelineOnAwake__Class* klass;
    MonitorData* monitor;
    struct StartTimelineOnAwake__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartTimelineOnAwake_FWDDECL)
#define IL2CPP_STRUCT_StartTimelineOnAwake_FWDDECL
#include <Modloader/app/structs/StartTimelineOnAwake__Class.h>
#endif
#undef IL2CPP_STRUCT_StartTimelineOnAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartTimelineOnAwake_DEFINED) && !defined(IL2CPP_STRUCT_StartTimelineOnAwake_FWDDECL)
#include <Modloader/app/structs/StartTimelineOnAwake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartTimelineOnAwake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
