#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/SpiderInteractionBehaviour_InteractionStates__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderInteractionBehaviour_InteractionStates__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MoonReference_1_IDialogCallbackNotifier_;
struct IDialogCallbackNotifier;
struct SpiderNpcEntity;
struct SpiderInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* TalkA;
    struct MoonTimeline* IdleA;
    SpiderInteractionBehaviour_InteractionStates__Enum m_currentState;

    struct MoonReference_1_IDialogCallbackNotifier_* IntroductionDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_* SpiderlingRetalkDialogNode;
    struct MoonTimeline* m_currentTimeline;
    struct IDialogCallbackNotifier* m_resolvedIntroductionNode;
    struct IDialogCallbackNotifier* m_resolvedSpiderlingRetalkNode;
    struct SpiderNpcEntity* m_npcEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#include <Modloader/app/structs/MoonReference_1_IDialogCallbackNotifier_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderNpcEntity.h>
#endif
#undef IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderInteractionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderInteractionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
