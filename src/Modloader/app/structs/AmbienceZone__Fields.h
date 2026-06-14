#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbienceZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbienceZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceZone__Fields_DEFINED)
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/AmbienceZone_AmbienceBoxMode__Enum.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/AudioListenerZone__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_AudioListenerZone__Fields_DEFINED) && defined(IL2CPP_STRUCT_AkCurveInterpolation__Enum_DEFINED) && defined(IL2CPP_STRUCT_AmbienceZone_AmbienceBoxMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AmbienceZone__Fields_DEFINED
struct Transform;
struct Event_1;
struct State;
struct Switch_1;
struct Trigger;
struct RTPC;
struct Object_1__Array;
struct AmbienceZone__Fields {
    struct AudioListenerZone__Fields _;
    struct Transform* AlternativeEmitterPoint;
    struct Event_1* WiseEvent;
    struct Event_1* WiseEventOnEnter;
    struct Event_1* WiseEventOnExit;
    float WWiseFadeOutDuration;
    AkCurveInterpolation__Enum WWiseFadeType;

    bool EnableDynamicAmbience;
    AmbienceZone_AmbienceBoxMode__Enum DynamicMode;

    float OnEnterCooldown;
    float OnExitCooldown;
    struct State* StateOnEnter;
    struct State* StateOnExit;
    struct Switch_1* SwitchOnEnter;
    struct Switch_1* SwitchOnExit;
    struct Trigger* TriggerOnEnter;
    struct Trigger* TriggerOnExit;
    struct RTPC* RTPC;
    struct RTPC* DistanceBasedRTPC;
    struct ArtificialSoundHostReference SoundHost;
    struct Object_1__Array* RTPCFeedObjects;
    bool InnerBoundsEnabled;
    struct Rect InnerBounds;
    float m_lastRtpcValue;
    struct Rect m_bounds;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    float m_timeLastEntered;
    float m_timeLastExited;
    struct Vector3 m_previousPosition;
    struct Vector3 m_previousScale;
    struct Vector3 m_point;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbienceZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmbienceZone__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_AmbienceZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmbienceZone__Fields_FWDDECL)
#include <Modloader/app/structs/AmbienceZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbienceZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
