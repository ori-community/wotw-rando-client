#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionGraph_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionGraph_DEFINED)
#include <Modloader/app/structs/InteractionGraph__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionGraph__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionGraph_DEFINED
struct InteractionGraph__Class;
struct InteractionGraph {
    struct InteractionGraph__Class* klass;
    MonitorData* monitor;
    struct InteractionGraph__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionGraph_FWDDECL)
#define IL2CPP_STRUCT_InteractionGraph_FWDDECL
#include <Modloader/app/structs/InteractionGraph__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionGraph_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionGraph_DEFINED) && !defined(IL2CPP_STRUCT_InteractionGraph_FWDDECL)
#include <Modloader/app/structs/InteractionGraph.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionGraph.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
