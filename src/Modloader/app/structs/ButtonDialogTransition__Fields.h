#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonDialogTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonDialogTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonDialogTransition__Fields_DEFINED)
#include <Modloader/app/structs/InteractionBidingButton__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_InteractionBidingButton__Enum_DEFINED)
#define IL2CPP_STRUCT_ButtonDialogTransition__Fields_DEFINED
struct MoonReference_1_IDialogNode_;
struct MessageProvider;
struct InteractionBinding;
struct IDialogNode;
struct Action_1_IContext_;
struct ButtonDialogTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_IDialogNode_* Destination;
    InteractionBidingButton__Enum InteractionButton;

    struct MessageProvider* Message;
    struct InteractionBinding* m_interactionBiding;
    struct IDialogNode* m_resolvedDialogNode;
    bool m_buttonPressed;
    struct Action_1_IContext_* _OnActivated_k__BackingField;
    struct Action_1_IContext_* _OnFinished_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonDialogTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ButtonDialogTransition__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_IContext_.h>
#include <Modloader/app/structs/IDialogNode.h>
#include <Modloader/app/structs/InteractionBinding.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_IDialogNode_.h>
#endif
#undef IL2CPP_STRUCT_ButtonDialogTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonDialogTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ButtonDialogTransition__Fields_FWDDECL)
#include <Modloader/app/structs/ButtonDialogTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonDialogTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
