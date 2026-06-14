#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunWorkerCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunWorkerCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunWorkerCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/RunWorkerCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_RunWorkerCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RunWorkerCompletedEventHandler_DEFINED
struct RunWorkerCompletedEventHandler__Class;
struct RunWorkerCompletedEventHandler {
    struct RunWorkerCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct RunWorkerCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunWorkerCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_RunWorkerCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/RunWorkerCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_RunWorkerCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunWorkerCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_RunWorkerCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/RunWorkerCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunWorkerCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
