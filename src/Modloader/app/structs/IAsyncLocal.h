#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAsyncLocal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAsyncLocal_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncLocal_DEFINED)
#define IL2CPP_STRUCT_IAsyncLocal_DEFINED
struct IAsyncLocal__Class;
struct IAsyncLocal {
    struct IAsyncLocal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAsyncLocal_FWDDECL)
#define IL2CPP_STRUCT_IAsyncLocal_FWDDECL
#include <Modloader/app/structs/IAsyncLocal__Class.h>
#endif
#undef IL2CPP_STRUCT_IAsyncLocal_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncLocal_DEFINED) && !defined(IL2CPP_STRUCT_IAsyncLocal_FWDDECL)
#include <Modloader/app/structs/IAsyncLocal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAsyncLocal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
