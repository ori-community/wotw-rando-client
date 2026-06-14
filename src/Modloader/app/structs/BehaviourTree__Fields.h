#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTree__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourTree__Fields_DEFINED
struct BehaviourNode;
struct IBlackboard;
struct String;
struct BTContext;
struct HashSet_1_Moon_BehaviourSystem_IBehaviourNode_;
struct IBehaviourNode;
struct BehaviourTree__Fields {
    struct MonoBehaviour__Fields _;
    bool m_autoUpdate;
    struct BehaviourNode* m_rootNode;
    struct IBlackboard* m_blackboard;
    struct String* m_skipUpdateReason;
    bool m_updateSkipped;
    struct BTContext* m_context;
    struct HashSet_1_Moon_BehaviourSystem_IBehaviourNode_* m_nodesToReset;
    bool _IsInitialized_k__BackingField;
    struct IBehaviourNode* _LastExecutedLeafNode_k__BackingField;
    bool _HasLastExecutedLeafNode_k__BackingField;
    bool _IsRunning_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTree__Fields_FWDDECL
#include <Modloader/app/structs/BTContext.h>
#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/HashSet_1_Moon_BehaviourSystem_IBehaviourNode_.h>
#include <Modloader/app/structs/IBehaviourNode.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTree__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
