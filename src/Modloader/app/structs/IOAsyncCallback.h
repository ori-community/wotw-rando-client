#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOAsyncCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOAsyncCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOAsyncCallback_DEFINED)
#include <Modloader/app/structs/IOAsyncCallback__Fields.h>
#if defined(IL2CPP_STRUCT_IOAsyncCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_IOAsyncCallback_DEFINED
struct IOAsyncCallback__Class;
struct IOAsyncCallback {
    struct IOAsyncCallback__Class* klass;
    MonitorData* monitor;
    struct IOAsyncCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IOAsyncCallback_FWDDECL)
#define IL2CPP_STRUCT_IOAsyncCallback_FWDDECL
#include <Modloader/app/structs/IOAsyncCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_IOAsyncCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOAsyncCallback_DEFINED) && !defined(IL2CPP_STRUCT_IOAsyncCallback_FWDDECL)
#include <Modloader/app/structs/IOAsyncCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOAsyncCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
