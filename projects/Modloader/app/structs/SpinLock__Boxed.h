#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpinLock__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpinLock__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinLock__Boxed_DEFINED)
#include <Modloader/app/structs/SpinLock.h>
#if defined(IL2CPP_STRUCT_SpinLock_DEFINED)
#define IL2CPP_STRUCT_SpinLock__Boxed_DEFINED
struct SpinLock__Class;
struct SpinLock__Boxed {
    struct SpinLock__Class* klass;
    MonitorData* monitor;
    struct SpinLock fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpinLock__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SpinLock__Boxed_FWDDECL
#include <Modloader/app/structs/SpinLock__Class.h>
#endif
#undef IL2CPP_STRUCT_SpinLock__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinLock__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SpinLock__Boxed_FWDDECL)
#include <Modloader/app/structs/SpinLock__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpinLock__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
