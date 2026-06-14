#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncTaskCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncTaskCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncTaskCache_DEFINED)
#define IL2CPP_STRUCT_AsyncTaskCache_DEFINED
struct AsyncTaskCache__Class;
struct AsyncTaskCache {
    struct AsyncTaskCache__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncTaskCache_FWDDECL)
#define IL2CPP_STRUCT_AsyncTaskCache_FWDDECL
#include <Modloader/app/structs/AsyncTaskCache__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncTaskCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncTaskCache_DEFINED) && !defined(IL2CPP_STRUCT_AsyncTaskCache_FWDDECL)
#include <Modloader/app/structs/AsyncTaskCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncTaskCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
