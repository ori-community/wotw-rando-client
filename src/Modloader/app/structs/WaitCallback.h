#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitCallback_DEFINED)
#include <Modloader/app/structs/WaitCallback__Fields.h>
#if defined(IL2CPP_STRUCT_WaitCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitCallback_DEFINED
struct WaitCallback__Class;
struct WaitCallback {
    struct WaitCallback__Class* klass;
    MonitorData* monitor;
    struct WaitCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitCallback_FWDDECL)
#define IL2CPP_STRUCT_WaitCallback_FWDDECL
#include <Modloader/app/structs/WaitCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitCallback_DEFINED) && !defined(IL2CPP_STRUCT_WaitCallback_FWDDECL)
#include <Modloader/app/structs/WaitCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
