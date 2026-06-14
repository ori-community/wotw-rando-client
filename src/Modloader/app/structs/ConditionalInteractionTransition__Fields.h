#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_DEFINED
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_;
struct MoonReference_1_ICondition_;
struct IInteractionNode;
struct ICondition;
struct ConditionalInteractionTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_* Destination;
    struct MoonReference_1_ICondition_* Condition;
    bool WaitForNodeToFinish;
    struct IInteractionNode* m_resolvedDialogNode;
    struct ICondition* m_resolvedCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_FWDDECL
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IInteractionNode.h>
#include <Modloader/app/structs/MoonReference_1_ICondition_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionNode_.h>
#endif
#undef IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalInteractionTransition__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionalInteractionTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalInteractionTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
