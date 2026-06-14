#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCaptureAgent_DEFINED)
#include <Modloader/app/structs/MemoryCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_MemoryCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryCaptureAgent_DEFINED
struct MemoryCaptureAgent__Class;
struct MemoryCaptureAgent {
    struct MemoryCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct MemoryCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_MemoryCaptureAgent_FWDDECL
#include <Modloader/app/structs/MemoryCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_MemoryCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_MemoryCaptureAgent_FWDDECL)
#include <Modloader/app/structs/MemoryCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
