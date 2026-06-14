#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TreeData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TreeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeData__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TreeData__Fields_DEFINED
struct NodeDataUI;
struct List_1_Moon_BehaviourSystem_BehaviourNode_;
struct List_1_Moon_BehaviourSystem_BTEditor_NodeDataUI_;
struct BehaviourTree;
struct TreeData__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_gameObjectInstanceID;
    struct NodeDataUI* m_rootData;
    struct List_1_Moon_BehaviourSystem_BehaviourNode_* m_serializedNodes;
    struct List_1_Moon_BehaviourSystem_BTEditor_NodeDataUI_* m_serializedNodesValues;
    struct BehaviourTree* m_behaviourTree;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TreeData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TreeData__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BTEditor_NodeDataUI_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BehaviourNode_.h>
#include <Modloader/app/structs/NodeDataUI.h>
#endif
#undef IL2CPP_STRUCT_TreeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TreeData__Fields_FWDDECL)
#include <Modloader/app/structs/TreeData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TreeData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
