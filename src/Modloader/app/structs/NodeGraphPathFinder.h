#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NodeGraphPathFinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NodeGraphPathFinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeGraphPathFinder_DEFINED)
#include <Modloader/app/structs/NodeGraphPathFinder__Fields.h>
#if defined(IL2CPP_STRUCT_NodeGraphPathFinder__Fields_DEFINED)
#define IL2CPP_STRUCT_NodeGraphPathFinder_DEFINED
struct NodeGraphPathFinder__Class;
struct NodeGraphPathFinder {
    struct NodeGraphPathFinder__Class* klass;
    MonitorData* monitor;
    struct NodeGraphPathFinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NodeGraphPathFinder_FWDDECL)
#define IL2CPP_STRUCT_NodeGraphPathFinder_FWDDECL
#include <Modloader/app/structs/NodeGraphPathFinder__Class.h>
#endif
#undef IL2CPP_STRUCT_NodeGraphPathFinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeGraphPathFinder_DEFINED) && !defined(IL2CPP_STRUCT_NodeGraphPathFinder_FWDDECL)
#include <Modloader/app/structs/NodeGraphPathFinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NodeGraphPathFinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
