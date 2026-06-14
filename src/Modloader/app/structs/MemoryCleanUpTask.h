#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryCleanUpTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryCleanUpTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCleanUpTask_DEFINED)
#include <Modloader/app/structs/MemoryCleanUpTask__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryCleanUpTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryCleanUpTask_DEFINED
struct MemoryCleanUpTask__Class;
struct MemoryCleanUpTask {
    struct MemoryCleanUpTask__Class* klass;
    MonitorData* monitor;
    struct MemoryCleanUpTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryCleanUpTask_FWDDECL)
#define IL2CPP_STRUCT_MemoryCleanUpTask_FWDDECL
#include <Modloader/app/structs/MemoryCleanUpTask__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryCleanUpTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCleanUpTask_DEFINED) && !defined(IL2CPP_STRUCT_MemoryCleanUpTask_FWDDECL)
#include <Modloader/app/structs/MemoryCleanUpTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryCleanUpTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
