#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UtilitySelectorNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UtilitySelectorNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode__Fields_DEFINED)
#include <Modloader/app/structs/CompositeNode__Fields.h>
#include <Modloader/app/structs/UtilitySelectorNode_UtilitySelectorMode__Enum.h>
#if defined(IL2CPP_STRUCT_CompositeNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_UtilitySelectorNode_UtilitySelectorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UtilitySelectorNode__Fields_DEFINED
struct Single__Array;
struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_;
struct List_1_Moon_BehaviourSystem_BehaviourNode_;
struct List_1_System_Single_;
struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_;
struct List_1_Moon_BehaviourSystem_IUtilityProvider_;
struct UtilitySelectorNode__Fields {
    struct CompositeNode__Fields _;
    UtilitySelectorNode_UtilitySelectorMode__Enum SelectionMode;

    float SelectionThreshold;
    struct Single__Array* m_utilities;
    struct List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* m_nodeUtilities;
    struct List_1_Moon_BehaviourSystem_BehaviourNode_* m_nodeList;
    struct List_1_System_Single_* m_utilitiesList;
    struct WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* m_weightedGroup;
    struct List_1_Moon_BehaviourSystem_IUtilityProvider_* m_utilityDecorators;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_UtilitySelectorNode__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BehaviourNode_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IUtilityProvider_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_.h>
#endif
#undef IL2CPP_STRUCT_UtilitySelectorNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UtilitySelectorNode__Fields_FWDDECL)
#include <Modloader/app/structs/UtilitySelectorNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UtilitySelectorNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
