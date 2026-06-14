#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Activator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Activator_INITIALIZING
#if !defined(IL2CPP_STRUCT__Activator_DEFINED)
#define IL2CPP_STRUCT__Activator_DEFINED
struct _Activator__Class;
struct _Activator {
    struct _Activator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Activator_FWDDECL)
#define IL2CPP_STRUCT__Activator_FWDDECL
#include <Modloader/app/structs/_Activator__Class.h>
#endif
#undef IL2CPP_STRUCT__Activator_INITIALIZING
#if !defined(IL2CPP_STRUCT__Activator_DEFINED) && !defined(IL2CPP_STRUCT__Activator_FWDDECL)
#include <Modloader/app/structs/_Activator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Activator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
