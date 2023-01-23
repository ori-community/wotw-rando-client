#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BashAttackGame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BashAttackGame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BashAttackGame__Fields_DEFINED)
#include <Modloader/app/structs/BashAttackGame_Modes__Enum.h>
#include <Modloader/app/structs/BashAttackGame_State__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_BashAttackGame_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_BashAttackGame_Modes__Enum_DEFINED)
#define IL2CPP_STRUCT_BashAttackGame__Fields_DEFINED
struct Transform;
struct BashAttackCritical;
struct MoonTimeline;
struct SoundPlayer;
struct Action_1_Single_;
struct BashAttackGame__Fields {
    struct Suspendable__Fields _;
    float Angle;
    struct Transform* ArrowSprite;
    struct BashAttackCritical* BashAttackCritical;
    struct MoonTimeline* AppearingTimeline;
    struct MoonTimeline* PlayingTimeline;
    struct MoonTimeline* DisappearingTimeline;
    BashAttackGame_State__Enum m_currentState;

    float m_stateCurrentTime;
    float m_nextBashLoopPlayedTime;
    struct SoundPlayer* m_bashLoopingAudioSource;
    struct Action_1_Single_* BashGameComplete;
    float m_keyboardSpeed;
    float m_keyboardAngle;
    bool _UsingJumpToBash_k__BackingField;
    bool m_keyboardClockwise;
    BashAttackGame_Modes__Enum m_mode;

    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BashAttackGame__Fields_FWDDECL)
#define IL2CPP_STRUCT_BashAttackGame__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/BashAttackCritical.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BashAttackGame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BashAttackGame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BashAttackGame__Fields_FWDDECL)
#include <Modloader/app/structs/BashAttackGame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BashAttackGame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
