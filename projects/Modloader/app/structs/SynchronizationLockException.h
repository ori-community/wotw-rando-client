#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SynchronizationLockException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SynchronizationLockException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SynchronizationLockException_DEFINED)
#include <Modloader/app/structs/SynchronizationLockException__Fields.h>
#if defined(IL2CPP_STRUCT_SynchronizationLockException__Fields_DEFINED)
#define IL2CPP_STRUCT_SynchronizationLockException_DEFINED
struct SynchronizationLockException__Class;
struct SynchronizationLockException {
    struct SynchronizationLockException__Class* klass;
    MonitorData* monitor;
    struct SynchronizationLockException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SynchronizationLockException_FWDDECL)
#define IL2CPP_STRUCT_SynchronizationLockException_FWDDECL
#include <Modloader/app/structs/SynchronizationLockException__Class.h>
#endif
#undef IL2CPP_STRUCT_SynchronizationLockException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SynchronizationLockException_DEFINED) && !defined(IL2CPP_STRUCT_SynchronizationLockException_FWDDECL)
#include <Modloader/app/structs/SynchronizationLockException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SynchronizationLockException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
