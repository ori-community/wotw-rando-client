#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonInteractionTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonInteractionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonInteractionTransition__Fields_DEFINED)
#include <Modloader/app/structs/InteractionBidingButton__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_InteractionBidingButton__Enum_DEFINED)
#define IL2CPP_STRUCT_ButtonInteractionTransition__Fields_DEFINED
struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_;
struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_;
struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_;
struct InteractionBinding;
struct IInteractionNode;
struct Action_1_IContext_;
struct ButtonInteractionTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_* Destination;
    InteractionBidingButton__Enum InteractionButton;

    struct MoonReference_1_Moon_InteractionGraph_IMessageProvider_* m_message;
    struct MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_* m_resolvedMessage;
    struct InteractionBinding* m_interactionBiding;
    struct IInteractionNode* m_resolvedDialogNode;
    bool m_buttonPressed;
    struct Action_1_IContext_* _OnActivated_k__BackingField;
    struct Action_1_IContext_* _OnFinished_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonInteractionTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ButtonInteractionTransition__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_IContext_.h>
#include <Modloader/app/structs/IInteractionNode.h>
#include <Modloader/app/structs/InteractionBinding.h>
#include <Modloader/app/structs/MoonReferenceCache_1_Moon_InteractionGraph_IMessageProvider_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionNode_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IMessageProvider_.h>
#endif
#undef IL2CPP_STRUCT_ButtonInteractionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonInteractionTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ButtonInteractionTransition__Fields_FWDDECL)
#include <Modloader/app/structs/ButtonInteractionTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonInteractionTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
