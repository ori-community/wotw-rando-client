#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNode__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogNode__Fields_DEFINED
struct MoonReference_1_IDialogActor_;
struct MessageProvider;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct List_1_Moon_Timeline_ShowTextEntity_;
struct List_1_Moon_MoonReference_1__15;
struct List_1_Moon_MoonReference_1__16;
struct MessageBox;
struct IDialogActor;
struct List_1_IDialogTransition_;
struct List_1_IDialogDecorator_;
struct InteractionSettings;
struct IDialogInteractionTransition__Array;
struct Action_1_IContext_;
struct DialogNode__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_IDialogActor_* DialogActor;
    struct MessageProvider* Message;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* DialogTimeline;
    struct List_1_Moon_Timeline_ShowTextEntity_* m_showTextEntities;
    struct List_1_Moon_MoonReference_1__15* NodeTransitions;
    struct List_1_Moon_MoonReference_1__16* NodeDecorators;
    struct MessageBox* m_messageBox;
    struct IDialogActor* m_resolvedActor;
    struct List_1_IDialogTransition_* m_resolvedTransitions;
    struct List_1_IDialogDecorator_* m_resolvedDecorators;
    struct InteractionSettings* m_interactionSettings;
    struct IDialogInteractionTransition__Array* m_interactiveTransitions;
    struct Action_1_IContext_* _OnActivated_k__BackingField;
    struct Action_1_IContext_* _OnFinished_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_DialogNode__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_IContext_.h>
#include <Modloader/app/structs/IDialogActor.h>
#include <Modloader/app/structs/IDialogInteractionTransition__Array.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/List_1_IDialogDecorator_.h>
#include <Modloader/app/structs/List_1_IDialogTransition_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__15.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__16.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ShowTextEntity_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_IDialogActor_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#endif
#undef IL2CPP_STRUCT_DialogNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DialogNode__Fields_FWDDECL)
#include <Modloader/app/structs/DialogNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
