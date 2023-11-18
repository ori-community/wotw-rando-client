#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyOnScrollLock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyOnScrollLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnScrollLock_DEFINED)
#include <Modloader/app/structs/DestroyOnScrollLock__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyOnScrollLock__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyOnScrollLock_DEFINED
struct DestroyOnScrollLock__Class;
struct DestroyOnScrollLock {
    struct DestroyOnScrollLock__Class* klass;
    MonitorData* monitor;
    struct DestroyOnScrollLock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyOnScrollLock_FWDDECL)
#define IL2CPP_STRUCT_DestroyOnScrollLock_FWDDECL
#include <Modloader/app/structs/DestroyOnScrollLock__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyOnScrollLock_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnScrollLock_DEFINED) && !defined(IL2CPP_STRUCT_DestroyOnScrollLock_FWDDECL)
#include <Modloader/app/structs/DestroyOnScrollLock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyOnScrollLock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
