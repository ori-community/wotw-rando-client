#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Assembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Assembly_INITIALIZING
#if !defined(IL2CPP_STRUCT__Assembly_DEFINED)
#define IL2CPP_STRUCT__Assembly_DEFINED
struct _Assembly__Class;
struct _Assembly {
    struct _Assembly__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Assembly_FWDDECL)
#define IL2CPP_STRUCT__Assembly_FWDDECL
#include <Modloader/app/structs/_Assembly__Class.h>
#endif
#undef IL2CPP_STRUCT__Assembly_INITIALIZING
#if !defined(IL2CPP_STRUCT__Assembly_DEFINED) && !defined(IL2CPP_STRUCT__Assembly_FWDDECL)
#include <Modloader/app/structs/_Assembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Assembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
