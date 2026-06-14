#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_DEFINED)
#include <Modloader/app/structs/NvnMemoryCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryCaptureAgent_DEFINED
struct NvnMemoryCaptureAgent__Class;
struct NvnMemoryCaptureAgent {
    struct NvnMemoryCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct NvnMemoryCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryCaptureAgent_FWDDECL
#include <Modloader/app/structs/NvnMemoryCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_NvnMemoryCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_FWDDECL)
#include <Modloader/app/structs/NvnMemoryCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
