#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForSecondsRealtime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForSecondsRealtime_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForSecondsRealtime_DEFINED)
#include <Modloader/app/structs/WaitForSecondsRealtime__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForSecondsRealtime__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForSecondsRealtime_DEFINED
struct WaitForSecondsRealtime__Class;
struct WaitForSecondsRealtime {
    struct WaitForSecondsRealtime__Class* klass;
    MonitorData* monitor;
    struct WaitForSecondsRealtime__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForSecondsRealtime_FWDDECL)
#define IL2CPP_STRUCT_WaitForSecondsRealtime_FWDDECL
#include <Modloader/app/structs/WaitForSecondsRealtime__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForSecondsRealtime_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForSecondsRealtime_DEFINED) && !defined(IL2CPP_STRUCT_WaitForSecondsRealtime_FWDDECL)
#include <Modloader/app/structs/WaitForSecondsRealtime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForSecondsRealtime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
