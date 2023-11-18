#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BaurInteractionBehaviour_InteractionStates__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_BaurInteractionBehaviour_InteractionStates__Enum_DEFINED)
#define IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MoonReference_1_IDialogCallbackNotifier_;
struct IDialogCallbackNotifier;
struct BaurEntity;
struct BaurInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    BaurInteractionBehaviour_InteractionStates__Enum m_currentState;

    struct MoonTimeline* m_currentTimeline;
    struct MoonReference_1_IDialogCallbackNotifier_* IntroductionDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_* AfterIntroRepeatDialogNode;
    struct IDialogCallbackNotifier* m_resolvedIntroductionNode;
    struct IDialogCallbackNotifier* m_resolvedAfterIntroRepeatNode;
    struct BaurEntity* m_npcEntity;
    struct MoonTimeline* TalkA;
    struct MoonTimeline* IdleA;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaurEntity.h>
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#include <Modloader/app/structs/MoonReference_1_IDialogCallbackNotifier_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/BaurInteractionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaurInteractionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
