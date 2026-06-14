#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_DEFINED)
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEventType__Enum.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_ZoneType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEventType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_ZoneType__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_DEFINED
struct SoundZoneProcessor_Job_PositionZoneEvent {
    struct Vector2 TrackableDistance;
    int32_t ZoneIndex;
    SoundZoneProcessor_Job_PositionZoneEventType__Enum EventType;

    SoundZoneProcessor_Job_ZoneType__Enum ZoneType;

    bool PositionChanged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_FWDDECL)
#define IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_FWDDECL
#endif
#undef IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_DEFINED) && !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_PositionZoneEvent_FWDDECL)
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
