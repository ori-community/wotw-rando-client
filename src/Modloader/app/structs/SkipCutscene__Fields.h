#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkipCutscene__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkipCutscene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutscene__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SkipCutscene_GameplayMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SkipCutscene_GameplayMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_SkipCutscene__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct List_1_Moon_MoonReference_1__11;
struct List_1_Moon_MoonReference_1__12;
struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_;
struct SkipCutscene_OptionalSkipCutsceneSettings;
struct List_1_ICondition_;
struct List_1_ISkipCutsceneAction_;
struct MoonTimeline;
struct SkipCutscene__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* Timeline;
    int32_t Priority;
    SkipCutscene_GameplayMode__Enum GameplayModeAfterSkip;

    bool CreateCheckpoint;
    struct CheckpointFunctionality Checkpoint;
    struct List_1_Moon_MoonReference_1__11* Conditions;
    struct List_1_Moon_MoonReference_1__12* SkipReactions;
    struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_* SkipableCutscenesTriggers;
    struct SkipCutscene_OptionalSkipCutsceneSettings* Optional;
    bool m_wasValid;
    struct List_1_ICondition_* m_resolvedConditions;
    struct List_1_ISkipCutsceneAction_* m_resolvedReactions;
    struct MoonTimeline* m_resolvedTimeline;
    bool _ValidForCutsceneSkiping_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkipCutscene__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkipCutscene__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ICondition_.h>
#include <Modloader/app/structs/List_1_ISkipCutsceneAction_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__11.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__12.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerGameplayAnimator_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkipCutscene_OptionalSkipCutsceneSettings.h>
#endif
#undef IL2CPP_STRUCT_SkipCutscene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutscene__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkipCutscene__Fields_FWDDECL)
#include <Modloader/app/structs/SkipCutscene__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkipCutscene__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
