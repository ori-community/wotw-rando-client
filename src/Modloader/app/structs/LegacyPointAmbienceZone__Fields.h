#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_DEFINED)
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AkCurveInterpolation__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED)
#define IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_DEFINED
struct SoundProvider;
struct Transform;
struct Event_1;
struct RTPC;
struct Object_1__Array;
struct Action;
struct LegacyPointAmbienceZone__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider* SoundProvider;
    struct Transform* Target;
    float WWiseFadeOutDuration;
    AkCurveInterpolation__Enum WWiseFadeType;

    struct Event_1* WiseEvent;
    struct RTPC* RTPC;
    struct Object_1__Array* RTPCFeedObjects;
    bool m_activated;
    struct Bounds m_bounds;
    float m_lastRtpcValue;
    struct Action* m_nullifyDelegate;
    struct ArtificialSoundHostReference m_soundHost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyPointAmbienceZone__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyPointAmbienceZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyPointAmbienceZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
