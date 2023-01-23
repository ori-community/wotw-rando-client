#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHelper_DEFINED)
#define IL2CPP_STRUCT_AsyncHelper_DEFINED
struct AsyncHelper__Class;
struct AsyncHelper {
    struct AsyncHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncHelper_FWDDECL)
#define IL2CPP_STRUCT_AsyncHelper_FWDDECL
#include <Modloader/app/structs/AsyncHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHelper_DEFINED) && !defined(IL2CPP_STRUCT_AsyncHelper_FWDDECL)
#include <Modloader/app/structs/AsyncHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
