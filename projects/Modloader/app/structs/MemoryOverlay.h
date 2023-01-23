#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryOverlay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryOverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryOverlay_DEFINED)
#include <Modloader/app/structs/MemoryOverlay__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryOverlay__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryOverlay_DEFINED
struct MemoryOverlay__Class;
struct MemoryOverlay {
    struct MemoryOverlay__Class* klass;
    MonitorData* monitor;
    struct MemoryOverlay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryOverlay_FWDDECL)
#define IL2CPP_STRUCT_MemoryOverlay_FWDDECL
#include <Modloader/app/structs/MemoryOverlay__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryOverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryOverlay_DEFINED) && !defined(IL2CPP_STRUCT_MemoryOverlay_FWDDECL)
#include <Modloader/app/structs/MemoryOverlay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryOverlay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
