#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StopWatchWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StopWatchWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_StopWatchWrapper_DEFINED)
#include <Modloader/app/structs/StopWatchWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_StopWatchWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_StopWatchWrapper_DEFINED
struct StopWatchWrapper__Class;
struct StopWatchWrapper {
    struct StopWatchWrapper__Class* klass;
    MonitorData* monitor;
    struct StopWatchWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StopWatchWrapper_FWDDECL)
#define IL2CPP_STRUCT_StopWatchWrapper_FWDDECL
#include <Modloader/app/structs/StopWatchWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_StopWatchWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_StopWatchWrapper_DEFINED) && !defined(IL2CPP_STRUCT_StopWatchWrapper_FWDDECL)
#include <Modloader/app/structs/StopWatchWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StopWatchWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
