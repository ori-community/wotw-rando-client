#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemClock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemClock_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemClock_DEFINED)
#define IL2CPP_STRUCT_SystemClock_DEFINED
struct SystemClock__Class;
struct SystemClock {
    struct SystemClock__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SystemClock_FWDDECL)
#define IL2CPP_STRUCT_SystemClock_FWDDECL
#include <Modloader/app/structs/SystemClock__Class.h>
#endif
#undef IL2CPP_STRUCT_SystemClock_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemClock_DEFINED) && !defined(IL2CPP_STRUCT_SystemClock_FWDDECL)
#include <Modloader/app/structs/SystemClock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemClock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
