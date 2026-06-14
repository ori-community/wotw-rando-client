#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#include <Modloader/app/structs/MoonTelemetryShrineEndEvent_ShrineResult__Enum.h>
#include <Modloader/app/structs/MoonTelemetryShrineStartEvent_ShrineID__Enum.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonTelemetryShrineEndEvent_ShrineResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonTelemetryShrineStartEvent_ShrineID__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_DEFINED
struct String;
struct MoonTelemetryShrineEndEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    float ChallengeTime;
    MoonTelemetryShrineEndEvent_ShrineResult__Enum Result;

    MoonTelemetryShrineStartEvent_ShrineID__Enum ShrineSceneID;

    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryShrineEndEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryShrineEndEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryShrineEndEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
