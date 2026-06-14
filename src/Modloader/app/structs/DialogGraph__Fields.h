#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogGraph__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogGraph__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DialogGraph__Fields_DEFINED
struct MoonReference_1_IDialogNode_;
struct Action_1_IDialogNode_;
struct StateMachine_2;
struct TransitionManager_1;
struct IDialogNode__Array;
struct DialogGraph_DialogGraphContext;
struct DialogGraph_MessageFinishedCondition;
struct MessageBox;
struct IDialogNode;
struct DialogGraph__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_IDialogNode_* RootNode;
    struct Action_1_IDialogNode_* OnDialogNodeChanged;
    struct StateMachine_2* m_stateMachine;
    struct TransitionManager_1* m_transManager;
    struct IDialogNode__Array* m_nodes;
    bool m_active;
    struct DialogGraph_DialogGraphContext* m_context;
    struct DialogGraph_MessageFinishedCondition* m_messageFinishedContition;
    struct MessageBox* m_npcScreen;
    struct IDialogNode* m_resolvedRootNode;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogGraph__Fields_FWDDECL)
#define IL2CPP_STRUCT_DialogGraph__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_IDialogNode_.h>
#include <Modloader/app/structs/DialogGraph_DialogGraphContext.h>
#include <Modloader/app/structs/DialogGraph_MessageFinishedCondition.h>
#include <Modloader/app/structs/IDialogNode.h>
#include <Modloader/app/structs/IDialogNode__Array.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonReference_1_IDialogNode_.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/TransitionManager_1.h>
#endif
#undef IL2CPP_STRUCT_DialogGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogGraph__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DialogGraph__Fields_FWDDECL)
#include <Modloader/app/structs/DialogGraph__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogGraph__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
