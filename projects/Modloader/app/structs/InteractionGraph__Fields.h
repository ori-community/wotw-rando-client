#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionGraph__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionGraph__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_InteractionGraph__Fields_DEFINED
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_;
struct Action_1_Moon_InteractionGraph_IInteractionNode_;
struct StateMachine_1;
struct TransitionManager;
struct IInteractionNode__Array;
struct InteractionGraph_InteractionGraphContext;
struct InteractionGraph_NodeFinishedCondition;
struct IInteractionNode;
struct InteractionGraph__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_* RootNode;
    struct Action_1_Moon_InteractionGraph_IInteractionNode_* OnDialogNodeChanged;
    struct StateMachine_1* m_stateMachine;
    struct TransitionManager* m_transitionManager;
    struct IInteractionNode__Array* m_nodes;
    bool m_active;
    struct InteractionGraph_InteractionGraphContext* m_context;
    struct InteractionGraph_NodeFinishedCondition* m_nodeFinishedContition;
    struct IInteractionNode* m_resolvedRootNode;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionGraph__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionGraph__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_InteractionGraph_IInteractionNode_.h>
#include <Modloader/app/structs/IInteractionNode.h>
#include <Modloader/app/structs/IInteractionNode__Array.h>
#include <Modloader/app/structs/InteractionGraph_InteractionGraphContext.h>
#include <Modloader/app/structs/InteractionGraph_NodeFinishedCondition.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionNode_.h>
#include <Modloader/app/structs/StateMachine_1.h>
#include <Modloader/app/structs/TransitionManager.h>
#endif
#undef IL2CPP_STRUCT_InteractionGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionGraph__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionGraph__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionGraph__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionGraph__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
