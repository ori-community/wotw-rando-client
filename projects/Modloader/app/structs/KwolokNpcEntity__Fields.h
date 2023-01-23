#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokNpcEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokNpcEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokNpcEntity__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/KwolokNpcEntity_KwolokLocation__Enum.h>
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_KwolokNpcEntity_KwolokLocation__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_KwolokNpcEntity__Fields_DEFINED
struct BlendAnimation;
struct FloatAnimationParameter;
struct MoonTimeline;
struct Quest;
struct SerializedIntUberState;
struct IUberState__Array;
struct String;
struct KwolokNpcEntity__Fields {
    struct NPCEntity__Fields _;
    KwolokNpcEntity_KwolokLocation__Enum Location;

    struct BlendAnimation* LookAnimationLoop;
    struct FloatAnimationParameter* LookAngleParameter;
    struct MoonTimeline* MoveToLeftSide;
    struct MoonTimeline* NotIntroducedIdle;
    struct MoonTimeline* IntroducedIdle;
    struct MoonTimeline* m_currentIdleTimeline;
    struct Quest* WellspringQuest;
    struct Quest* ProgressedMainQuestStep;
    struct Quest* FindElderQuest;
    struct Quest* WotwQuest;
    struct SerializedIntUberState* KwolokState;
    struct SerializedIntUberState* CleanseWellspringQuestState;
    bool ProximityInteraction;
    struct ActiveAnimationHandle m_idle;
    struct IUberState__Array* m_affectingUberStates;
    struct String* m_interactionActorName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokNpcEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokNpcEntity__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_KwolokNpcEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokNpcEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokNpcEntity__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokNpcEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokNpcEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
