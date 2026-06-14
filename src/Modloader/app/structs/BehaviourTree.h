#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTree_DEFINED)
#include <Modloader/app/structs/BehaviourTree__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourTree__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourTree_DEFINED
struct BehaviourTree__Class;
struct BehaviourTree {
    struct BehaviourTree__Class* klass;
    MonitorData* monitor;
    struct BehaviourTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTree_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTree_FWDDECL
#include <Modloader/app/structs/BehaviourTree__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTree_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTree_FWDDECL)
#include <Modloader/app/structs/BehaviourTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
