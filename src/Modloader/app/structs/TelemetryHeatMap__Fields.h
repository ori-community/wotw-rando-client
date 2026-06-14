#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryHeatMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryHeatMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryHeatMap__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryHeatMap__Fields_DEFINED
struct Vector4__Array;
struct Material;
struct TelemetryHeatMap__Fields {
    struct MonoBehaviour__Fields _;
    float m_positionRandom;
    float m_radiusRandom;
    float m_intensityRandom;
    struct Vector4__Array* positions;
    struct Vector4__Array* properties;
    struct Material* material;
    int32_t count;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryHeatMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_TelemetryHeatMap__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_TelemetryHeatMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryHeatMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryHeatMap__Fields_FWDDECL)
#include <Modloader/app/structs/TelemetryHeatMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryHeatMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
