#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunWorkerCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunWorkerCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunWorkerCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/RunWorkerCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_RunWorkerCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_RunWorkerCompletedEventArgs_DEFINED
struct RunWorkerCompletedEventArgs__Class;
struct RunWorkerCompletedEventArgs {
    struct RunWorkerCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct RunWorkerCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunWorkerCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_RunWorkerCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/RunWorkerCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_RunWorkerCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunWorkerCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_RunWorkerCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/RunWorkerCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunWorkerCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
