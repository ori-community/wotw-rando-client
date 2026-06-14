#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequenceNode_2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequenceNode_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_2__Fields_DEFINED)
#include <Modloader/app/structs/IParentBehaviourTreeNode__Fields.h>
#if defined(IL2CPP_STRUCT_IParentBehaviourTreeNode__Fields_DEFINED)
#define IL2CPP_STRUCT_SequenceNode_2__Fields_DEFINED
struct String;
struct List_1_UberBehaviourTree_IBehaviourTreeNode_;
struct SequenceNode_2__Fields {
    struct IParentBehaviourTreeNode__Fields _;
    struct String* name;
    struct List_1_UberBehaviourTree_IBehaviourTreeNode_* children;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequenceNode_2__Fields_FWDDECL)
#define IL2CPP_STRUCT_SequenceNode_2__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberBehaviourTree_IBehaviourTreeNode_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SequenceNode_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SequenceNode_2__Fields_FWDDECL)
#include <Modloader/app/structs/SequenceNode_2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequenceNode_2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
