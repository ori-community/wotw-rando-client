#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IParentBehaviourTreeNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IParentBehaviourTreeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IParentBehaviourTreeNode_DEFINED)
#include <Modloader/app/structs/IParentBehaviourTreeNode__Fields.h>
#if defined(IL2CPP_STRUCT_IParentBehaviourTreeNode__Fields_DEFINED)
#define IL2CPP_STRUCT_IParentBehaviourTreeNode_DEFINED
struct IParentBehaviourTreeNode__Class;
struct IParentBehaviourTreeNode {
    struct IParentBehaviourTreeNode__Class* klass;
    MonitorData* monitor;
    struct IParentBehaviourTreeNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IParentBehaviourTreeNode_FWDDECL)
#define IL2CPP_STRUCT_IParentBehaviourTreeNode_FWDDECL
#include <Modloader/app/structs/IParentBehaviourTreeNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IParentBehaviourTreeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IParentBehaviourTreeNode_DEFINED) && !defined(IL2CPP_STRUCT_IParentBehaviourTreeNode_FWDDECL)
#include <Modloader/app/structs/IParentBehaviourTreeNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IParentBehaviourTreeNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
