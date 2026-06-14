#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryCounter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCounter_DEFINED)
#include <Modloader/app/structs/MemoryCounter__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryCounter__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryCounter_DEFINED
struct MemoryCounter__Class;
struct MemoryCounter {
    struct MemoryCounter__Class* klass;
    MonitorData* monitor;
    struct MemoryCounter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryCounter_FWDDECL)
#define IL2CPP_STRUCT_MemoryCounter_FWDDECL
#include <Modloader/app/structs/MemoryCounter__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCounter_DEFINED) && !defined(IL2CPP_STRUCT_MemoryCounter_FWDDECL)
#include <Modloader/app/structs/MemoryCounter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryCounter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
