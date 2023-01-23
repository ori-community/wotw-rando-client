#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_DEFINED
struct IBehaviourTreeNode;
struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode_;
struct __declspec(align(8)) BehaviourTreeBuilder__Fields {
    struct IBehaviourTreeNode* curNode;
    struct Stack_1_UberBehaviourTree_IParentBehaviourTreeNode_* parentNodeStack;
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_FWDDECL
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#include <Modloader/app/structs/Stack_1_UberBehaviourTree_IParentBehaviourTreeNode_.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourTreeBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTreeBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
