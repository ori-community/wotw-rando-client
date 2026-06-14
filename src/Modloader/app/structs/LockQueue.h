#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockQueue_DEFINED)
#include <Modloader/app/structs/LockQueue__Fields.h>
#if defined(IL2CPP_STRUCT_LockQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_LockQueue_DEFINED
struct LockQueue__Class;
struct LockQueue {
    struct LockQueue__Class* klass;
    MonitorData* monitor;
    struct LockQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockQueue_FWDDECL)
#define IL2CPP_STRUCT_LockQueue_FWDDECL
#include <Modloader/app/structs/LockQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_LockQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockQueue_DEFINED) && !defined(IL2CPP_STRUCT_LockQueue_FWDDECL)
#include <Modloader/app/structs/LockQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
