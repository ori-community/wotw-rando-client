#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_DEFINED
struct EventTriggerAnimator;
struct PassiveSetupInfo;
struct __declspec(align(8)) ShrineCombat_WaveProgressMarker__Fields {
    struct EventTriggerAnimator* EventTrigger;
    struct PassiveSetupInfo* Marker;
    bool StayOnWhenReplayTriggered;
};
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/PassiveSetupInfo.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat_WaveProgressMarker__Fields_FWDDECL)
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
