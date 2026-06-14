#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#include <Modloader/app/structs/MoonTelemetryRacesStartEvent_RaceID__Enum.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonTelemetryRacesStartEvent_RaceID__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_DEFINED
struct String;
struct MoonTelemetryRacesEndEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    float RaceTime;
    int32_t LeaderboardPlacing;
    MoonTelemetryRacesStartEvent_RaceID__Enum RaceSceneID;

    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryRacesEndEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryRacesEndEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryRacesEndEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
