#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_AkCurveInterpolation__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_DEFINED
struct Event_1;
struct Switch_1;
struct State;
struct Trigger;
struct SoundHost;
struct MoonReference_1_Moon_Wwise_SoundHost_;
struct WWiseSoundAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Event_1* Event;
    struct Switch_1* Switch;
    struct State* State;
    struct Trigger* Trigger;
    struct SoundHost* SoundHost;
    struct MoonReference_1_Moon_Wwise_SoundHost_* MoonSoundHost;
    bool FireAndForget;
    int32_t MillisecondsStopFadeDuration;
    AkCurveInterpolation__Enum FadeCurve;

    bool LoopWithParent;
    float m_time;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    bool m_waapiObjectRegistered;
    uint32_t m_idToStopWithOuterScope;
    bool _LoopContext_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Wwise_SoundHost_.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WWiseSoundAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WWiseSoundAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WWiseSoundAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
