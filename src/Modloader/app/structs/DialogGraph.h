#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogGraph_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogGraph_DEFINED)
#include <Modloader/app/structs/DialogGraph__Fields.h>
#if defined(IL2CPP_STRUCT_DialogGraph__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogGraph_DEFINED
struct DialogGraph__Class;
struct DialogGraph {
    struct DialogGraph__Class* klass;
    MonitorData* monitor;
    struct DialogGraph__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogGraph_FWDDECL)
#define IL2CPP_STRUCT_DialogGraph_FWDDECL
#include <Modloader/app/structs/DialogGraph__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogGraph_DEFINED) && !defined(IL2CPP_STRUCT_DialogGraph_FWDDECL)
#include <Modloader/app/structs/DialogGraph.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogGraph.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
