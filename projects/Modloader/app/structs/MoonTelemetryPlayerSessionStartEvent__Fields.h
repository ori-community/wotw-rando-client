#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_DEFINED
struct String;
struct MoonTelemetryPlayerSessionStartEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    int32_t OS;
    struct String* OSVersion;
    struct String* Language;
    struct String* Region_1;
    int32_t PrimaryDisplayWidth;
    int32_t PrimaryDisplayHeight;
    struct String* CPU;
    struct String* GPU;
    int32_t RAM;
    int32_t VRAM;
    struct String* DxLevel;
    bool GraphicsMultiThreaded;
    int32_t GraphicsShaderLevel;
    int32_t DeviceType;
    int32_t ProcessorCount;
    int32_t ProcessorFrequency;
    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryPlayerSessionStartEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
