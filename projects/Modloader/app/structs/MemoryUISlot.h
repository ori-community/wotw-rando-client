#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryUISlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryUISlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryUISlot_DEFINED)
#include <Modloader/app/structs/MemoryUISlot__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryUISlot__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryUISlot_DEFINED
struct MemoryUISlot__Class;
struct MemoryUISlot {
    struct MemoryUISlot__Class* klass;
    MonitorData* monitor;
    struct MemoryUISlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryUISlot_FWDDECL)
#define IL2CPP_STRUCT_MemoryUISlot_FWDDECL
#include <Modloader/app/structs/MemoryUISlot__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryUISlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryUISlot_DEFINED) && !defined(IL2CPP_STRUCT_MemoryUISlot_FWDDECL)
#include <Modloader/app/structs/MemoryUISlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryUISlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
