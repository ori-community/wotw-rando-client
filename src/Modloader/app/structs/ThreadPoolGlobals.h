#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolGlobals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolGlobals_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolGlobals_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolGlobals_DEFINED
struct ThreadPoolGlobals__Class;
struct ThreadPoolGlobals {
    struct ThreadPoolGlobals__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolGlobals_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolGlobals_FWDDECL
#include <Modloader/app/structs/ThreadPoolGlobals__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolGlobals_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolGlobals_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolGlobals_FWDDECL)
#include <Modloader/app/structs/ThreadPoolGlobals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolGlobals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
