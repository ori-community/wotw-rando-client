#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessWaitHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessWaitHandle_DEFINED)
#include <Modloader/app/structs/ProcessWaitHandle__Fields.h>
#if defined(IL2CPP_STRUCT_ProcessWaitHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_ProcessWaitHandle_DEFINED
struct ProcessWaitHandle__Class;
struct ProcessWaitHandle {
    struct ProcessWaitHandle__Class* klass;
    MonitorData* monitor;
    struct ProcessWaitHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProcessWaitHandle_FWDDECL)
#define IL2CPP_STRUCT_ProcessWaitHandle_FWDDECL
#include <Modloader/app/structs/ProcessWaitHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_ProcessWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessWaitHandle_DEFINED) && !defined(IL2CPP_STRUCT_ProcessWaitHandle_FWDDECL)
#include <Modloader/app/structs/ProcessWaitHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessWaitHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
