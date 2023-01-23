#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/MoonTelemetryEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED
struct String;
struct MoonTelemetryClientBaseEvent__Fields {
    struct MoonTelemetryEvent__Fields _;
    float PositionX;
    float PositionY;
    struct String* UserID;
    struct String* PlayerSessionID;
    float SessionDuration;
    struct String* SandboxID;
    int32_t PlatformID;
    struct String* ClientHardwareID;
    struct String* BuildID;
    struct String* ClientTimestampUTC;
    struct String* BuildTag;
    bool IsPirate;
    bool Docked;
    bool QualityMode;
    int32_t PCQualityMode;
    bool HFRSupported;
    struct DateTime _Time_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
