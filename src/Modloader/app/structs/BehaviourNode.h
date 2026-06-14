#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourNode_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourNode_DEFINED
struct BehaviourNode__Class;
struct BehaviourNode {
    struct BehaviourNode__Class* klass;
    MonitorData* monitor;
    struct BehaviourNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourNode_FWDDECL)
#define IL2CPP_STRUCT_BehaviourNode_FWDDECL
#include <Modloader/app/structs/BehaviourNode__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourNode_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourNode_FWDDECL)
#include <Modloader/app/structs/BehaviourNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
