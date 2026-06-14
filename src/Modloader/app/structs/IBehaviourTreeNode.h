#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBehaviourTreeNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBehaviourTreeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourTreeNode_DEFINED)
#include <Modloader/app/structs/IBehaviourTreeNode__Fields.h>
#if defined(IL2CPP_STRUCT_IBehaviourTreeNode__Fields_DEFINED)
#define IL2CPP_STRUCT_IBehaviourTreeNode_DEFINED
struct IBehaviourTreeNode__Class;
struct IBehaviourTreeNode {
    struct IBehaviourTreeNode__Class* klass;
    MonitorData* monitor;
    struct IBehaviourTreeNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IBehaviourTreeNode_FWDDECL)
#define IL2CPP_STRUCT_IBehaviourTreeNode_FWDDECL
#include <Modloader/app/structs/IBehaviourTreeNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IBehaviourTreeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourTreeNode_DEFINED) && !defined(IL2CPP_STRUCT_IBehaviourTreeNode_FWDDECL)
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
