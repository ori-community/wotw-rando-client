#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED)
#include <Modloader/app/structs/InteractionNodeStatus__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_InteractionNodeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_InteractionNode__Fields_DEFINED
struct MoonReference_1_Moon_InteractionGraph_IInteractionActor_;
struct List_1_Moon_MoonReference_1__3;
struct List_1_Moon_MoonReference_1__4;
struct IInteractionActor;
struct List_1_Moon_InteractionGraph_IInteractionTransition_;
struct List_1_Moon_InteractionGraph_IInteractionNodeDecorator_;
struct InteractionSettings;
struct List_1_Moon_InteractionGraph_IInputTransition_;
struct Action_1_IContext_;
struct InteractionNode__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_InteractionGraph_IInteractionActor_* InteractionActor;
    struct List_1_Moon_MoonReference_1__3* NodeTransitions;
    struct List_1_Moon_MoonReference_1__4* NodeDecorators;
    struct IInteractionActor* m_resolvedActor;
    struct List_1_Moon_InteractionGraph_IInteractionTransition_* m_resolvedTransitions;
    struct List_1_Moon_InteractionGraph_IInteractionNodeDecorator_* m_resolvedDecorators;
    struct InteractionSettings* m_interactionSettings;
    struct List_1_Moon_InteractionGraph_IInputTransition_* m_inputTransitions;
    struct Action_1_IContext_* _OnActivated_k__BackingField;
    struct Action_1_IContext_* _OnFinished_k__BackingField;
    InteractionNodeStatus__Enum _InteractionNodeStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionNode__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_IContext_.h>
#include <Modloader/app/structs/IInteractionActor.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_IInputTransition_.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_IInteractionNodeDecorator_.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_IInteractionTransition_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__3.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__4.h>
#include <Modloader/app/structs/MoonReference_1_Moon_InteractionGraph_IInteractionActor_.h>
#endif
#undef IL2CPP_STRUCT_InteractionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionNode__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
