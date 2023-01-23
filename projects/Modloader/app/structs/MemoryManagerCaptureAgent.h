#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryManagerCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryManagerCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryManagerCaptureAgent_DEFINED)
#include <Modloader/app/structs/MemoryManagerCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryManagerCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryManagerCaptureAgent_DEFINED
struct MemoryManagerCaptureAgent__Class;
struct MemoryManagerCaptureAgent {
    struct MemoryManagerCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct MemoryManagerCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryManagerCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_MemoryManagerCaptureAgent_FWDDECL
#include <Modloader/app/structs/MemoryManagerCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryManagerCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryManagerCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_MemoryManagerCaptureAgent_FWDDECL)
#include <Modloader/app/structs/MemoryManagerCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryManagerCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
