#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserObstacle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserObstacle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserObstacle__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserObstacle__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct Varying2DSoundProvider;
struct SoundPlayer;
struct LaserObstacle__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* BeamTransparancyCurve;
    struct AnimationCurve* AnticipationCurve;
    struct GameObject* Beam;
    struct GameObject* Impact;
    struct GameObject* Anticipation;
    float Offset;
    struct Varying2DSoundProvider* AnticipationSoundProvider;
    struct Varying2DSoundProvider* StartSoundProvider;
    struct Varying2DSoundProvider* EndSoundProvider;
    struct Varying2DSoundProvider* LoopSoundProvider;
    struct Varying2DSoundProvider* ImpactSoundProvider;
    struct SoundPlayer* m_lastLoop;
    struct SoundPlayer* m_lastImpactLoop;
    float m_anticipationSoundOffset;
    float m_curveDuration;
    float m_time;
    float m_anticipationCountdown;
    float m_beamStartCountdown;
    float m_beamStartOffset;
    float m_beamDuration;
    float m_beamOnCountdown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserObstacle__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserObstacle__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_LaserObstacle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserObstacle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserObstacle__Fields_FWDDECL)
#include <Modloader/app/structs/LaserObstacle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserObstacle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
