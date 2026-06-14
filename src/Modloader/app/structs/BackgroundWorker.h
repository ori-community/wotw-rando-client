#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackgroundWorker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackgroundWorker_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackgroundWorker_DEFINED)
#include <Modloader/app/structs/BackgroundWorker__Fields.h>
#if defined(IL2CPP_STRUCT_BackgroundWorker__Fields_DEFINED)
#define IL2CPP_STRUCT_BackgroundWorker_DEFINED
struct BackgroundWorker__Class;
struct BackgroundWorker {
    struct BackgroundWorker__Class* klass;
    MonitorData* monitor;
    struct BackgroundWorker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BackgroundWorker_FWDDECL)
#define IL2CPP_STRUCT_BackgroundWorker_FWDDECL
#include <Modloader/app/structs/BackgroundWorker__Class.h>
#endif
#undef IL2CPP_STRUCT_BackgroundWorker_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackgroundWorker_DEFINED) && !defined(IL2CPP_STRUCT_BackgroundWorker_FWDDECL)
#include <Modloader/app/structs/BackgroundWorker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackgroundWorker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
