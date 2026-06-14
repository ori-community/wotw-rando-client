#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FpsGraph_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FpsGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsGraph_DEFINED)
#include <Modloader/app/structs/FpsGraph__Fields.h>
#if defined(IL2CPP_STRUCT_FpsGraph__Fields_DEFINED)
#define IL2CPP_STRUCT_FpsGraph_DEFINED
struct FpsGraph__Class;
struct FpsGraph {
    struct FpsGraph__Class* klass;
    MonitorData* monitor;
    struct FpsGraph__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FpsGraph_FWDDECL)
#define IL2CPP_STRUCT_FpsGraph_FWDDECL
#include <Modloader/app/structs/FpsGraph__Class.h>
#endif
#undef IL2CPP_STRUCT_FpsGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsGraph_DEFINED) && !defined(IL2CPP_STRUCT_FpsGraph_FWDDECL)
#include <Modloader/app/structs/FpsGraph.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FpsGraph.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
