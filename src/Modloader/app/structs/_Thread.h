#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__Thread_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__Thread_INITIALIZING
#if !defined(IL2CPP_STRUCT__Thread_DEFINED)
#define IL2CPP_STRUCT__Thread_DEFINED
struct _Thread__Class;
struct _Thread {
    struct _Thread__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__Thread_FWDDECL)
#define IL2CPP_STRUCT__Thread_FWDDECL
#include <Modloader/app/structs/_Thread__Class.h>
#endif
#undef IL2CPP_STRUCT__Thread_INITIALIZING
#if !defined(IL2CPP_STRUCT__Thread_DEFINED) && !defined(IL2CPP_STRUCT__Thread_FWDDECL)
#include <Modloader/app/structs/_Thread.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_Thread.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
