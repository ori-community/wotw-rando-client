#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScatterGatherBuffers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScatterGatherBuffers_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_DEFINED)
#include <Modloader/app/structs/ScatterGatherBuffers__Fields.h>
#if defined(IL2CPP_STRUCT_ScatterGatherBuffers__Fields_DEFINED)
#define IL2CPP_STRUCT_ScatterGatherBuffers_DEFINED
struct ScatterGatherBuffers__Class;
struct ScatterGatherBuffers {
    struct ScatterGatherBuffers__Class* klass;
    MonitorData* monitor;
    struct ScatterGatherBuffers__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_FWDDECL)
#define IL2CPP_STRUCT_ScatterGatherBuffers_FWDDECL
#include <Modloader/app/structs/ScatterGatherBuffers__Class.h>
#endif
#undef IL2CPP_STRUCT_ScatterGatherBuffers_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScatterGatherBuffers_DEFINED) && !defined(IL2CPP_STRUCT_ScatterGatherBuffers_FWDDECL)
#include <Modloader/app/structs/ScatterGatherBuffers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScatterGatherBuffers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
