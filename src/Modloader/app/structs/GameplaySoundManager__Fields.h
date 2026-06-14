#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplaySoundManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplaySoundManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GameplaySoundManager__Fields_DEFINED
struct GameplaySoundParameterMap;
struct Event_1;
struct State;
struct GameplaySoundManager__Fields {
    struct MonoBehaviour__Fields _;
    struct GameplaySoundParameterMap* ParameterMap;
    struct Event_1* MusicLoopStartEvent;
    struct Event_1* MusicPausedEvent;
    struct Event_1* SFXPausedEvent;
    struct Event_1* GamePausedEvent;
    struct Event_1* GameUnpausedEvent;
    struct Event_1* GameSoftPausedEvent;
    struct Event_1* GameSoftUnpausedEvent;
    struct Event_1* OriBashingEvent;
    struct Event_1* OriNotBashingEvent;
    struct State* CinematicScopeState;
    struct State* GameplayScopeState;
    struct State* EfficientAudioQualityState;
    struct State* BalancedAudioQualityState;
    struct State* MaximumAudioQualityState;
    bool m_wasGamePausedLastFrame;
    bool m_wasGameSoftPausedLastFrame;
    bool m_wasBashingLastFrame;
    struct WwiseEventSystem_SoundHandle m_musicLoopSoundHandle;
    bool m_currentlyPlayingSyncedMusic;
    bool m_cinematicScopeSetThisFrame;
    uint32_t m_cinematicScopeStateGroupID;
    uint32_t m_cinematicScopeStateID;
    uint32_t m_gameplayScopeStateID;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplaySoundManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplaySoundManager__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameplaySoundParameterMap.h>
#include <Modloader/app/structs/State.h>
#endif
#undef IL2CPP_STRUCT_GameplaySoundManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplaySoundManager__Fields_FWDDECL)
#include <Modloader/app/structs/GameplaySoundManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplaySoundManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
