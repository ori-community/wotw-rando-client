#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_DEFINED)
#define IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_DEFINED
struct BehaviourNode;
struct UtilitySelectorNode_NodeUtility {
    struct BehaviourNode* Node;
    float Utility;
};
#endif
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_FWDDECL)
#define IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_FWDDECL
#include <Modloader/app/structs/BehaviourNode.h>
#endif
#undef IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_DEFINED) && !defined(IL2CPP_STRUCT_UtilitySelectorNode_NodeUtility_FWDDECL)
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
