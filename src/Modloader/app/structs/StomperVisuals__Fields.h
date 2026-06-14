#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StomperVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StomperVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_StomperVisuals__Fields_DEFINED
struct FixedJoint;
struct Event_1;
struct MoonTimeline;
struct GameObject;
struct SoundHost;
struct StomperVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct FixedJoint* VisualsFixedJoint;
    struct Event_1* StompSoundEvent;
    struct Event_1* StompStartSoundEvent;
    struct Event_1* StompResetSoundEvent;
    struct Event_1* StompReelInSoundEvent;
    struct MoonTimeline* TriggerStomperTimeline;
    struct MoonTimeline* StomperFallingTimeline;
    struct GameObject* StompImpactDust;
    struct SoundHost* m_soundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StomperVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_StomperVisuals__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FixedJoint.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_StomperVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StomperVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/StomperVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StomperVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
