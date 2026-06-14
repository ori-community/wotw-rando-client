#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Fields.h>
#include <Modloader/app/structs/RestartReason__Enum.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_RestartReason__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_DEFINED
struct String;
struct MoonTelemetryPlayerSessionEndEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    RestartReason__Enum ExitType;

    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionEndEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
