#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpSustainHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpSustainHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpSustainHelper__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_JumpSustainHelper__Fields_DEFINED
struct MessageProvider;
struct Queue_1_System_Single_;
struct String;
struct HashSet_1_UnityEngine_Vector2_;
struct JumpSustainHelper__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* WallJumpMessageProvider;
    struct MessageProvider* GroundJumpMessageProvider;
    int32_t m_minimumJumpsToAnalyze;
    float m_minimumHeightGain;
    float m_analysisDelay;
    float m_hintThreshold;
    bool m_analyzingWallJumps;
    bool m_sustaining;
    int32_t m_jumpCount;
    float m_sustainTime;
    float m_uselessSustainTime;
    float m_fallTime;
    float m_currentStateTime;
    float m_startY;
    float m_lastHintTime;
    struct Queue_1_System_Single_* m_pastResults;
    struct String* m_lastResult;
    bool m_analyzingGroundJumps;
    bool m_jumpDelegateSet;
    bool m_groundSustaining;
    struct HashSet_1_UnityEngine_Vector2_* m_recentFailedGroupJumpLocations;
    struct Vector2 m_lastGroundJumpLocation;
    float m_groundSustainTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpSustainHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpSustainHelper__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Queue_1_System_Single_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JumpSustainHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpSustainHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpSustainHelper__Fields_FWDDECL)
#include <Modloader/app/structs/JumpSustainHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpSustainHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
