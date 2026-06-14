#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoremasterReplayController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoremasterReplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterReplayController__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/LoremasterReplayController_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LoremasterReplayController_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LoremasterReplayController__Fields_DEFINED
struct ReplaySetting;
struct MoonTimeline;
struct EventTriggerAnimator;
struct Byte__Array;
struct LoremasterReplayController__Fields {
    struct MonoBehaviour__Fields _;
    struct ReplaySetting* m_currentSetting;
    LoremasterReplayController_State__Enum m_state;

    struct Nullable_1_UnityEngine_Vector3_ CachedSeinPosition;
    bool m_isMasterScene;
    struct MoonTimeline* m_masterTimeline;
    struct EventTriggerAnimator* m_overrideEndTimelineTrigger;
    bool m_masterTimelineFinished;
    bool ReplayStartedFromMainMenu;
    struct Byte__Array* UberStateValueStoreData;
    DifficultyMode__Enum m_currentDificulty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoremasterReplayController__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoremasterReplayController__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReplaySetting.h>
#endif
#undef IL2CPP_STRUCT_LoremasterReplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterReplayController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoremasterReplayController__Fields_FWDDECL)
#include <Modloader/app/structs/LoremasterReplayController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoremasterReplayController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
