#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderNpcEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderNpcEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderNpcEntity__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderNpcEntity__Fields_DEFINED
struct BlendAnimation;
struct FloatAnimationParameter;
struct MoonTimeline;
struct PlayerInsideZoneChecker;
struct SerializedIntUberState;
struct String;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct SpiderNpcEntity__Fields {
    struct NPCEntity__Fields _;
    struct BlendAnimation* LookAnimationLoop;
    struct BlendAnimation* TalkAnimationLoop;
    struct FloatAnimationParameter* LookAngleParameter;
    float LookOffsetX;
    struct MoonTimeline* NotIntroducedIdle;
    struct MoonTimeline* IntroducedIdle;
    struct MoonTimeline* m_currentIdleTimeline;
    struct PlayerInsideZoneChecker* GiveQuestZoneChecker;
    struct SerializedIntUberState* SpiderState;
    bool m_lookPlaying;
    bool m_talkPlaying;
    struct String* m_interactionActorName;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderNpcEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderNpcEntity__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SpiderNpcEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderNpcEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderNpcEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderNpcEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderNpcEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
