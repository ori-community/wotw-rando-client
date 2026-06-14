#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_DEFINED
struct String;
struct MoonTelemetryCharacterHeartbeatEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    int32_t MinFPS;
    int32_t AvgFPS;
    int32_t MaxFPS;
    int32_t WorstHistoryAverage;
    float AvgFrameTime;
    float MaxFrameTime;
    int32_t AvailableMemory;
    float m_sceneSlowedTime;
    float m_sceneStalledTime;
    float AvgCPUTime1;
    float AvgCPUTime2;
    float AvgCPUTime3;
    float AvgCPUTime4;
    float AvgGPUTime1;
    float AvgGPUTime2;
    float AvgGPUTime3;
    float AvgGPUTime4;
    float AvgFrameTime1;
    float AvgFrameTime2;
    float AvgFrameTime3;
    float AvgFrameTime4;
    float AvgDRSScaleX1;
    float AvgDRSScaleX2;
    float AvgDRSScaleX3;
    float AvgDRSScaleX4;
    int32_t MaxConsecutiveFramesCpuTimeOver25Ms;
    int32_t MaxConsecutiveFramesCpuTimeOver33Ms;
    int32_t MaxConsecutiveFramesCpuTimeOver50Ms;
    int32_t MaxConsecutiveFramesGpuTimeOver25Ms;
    int32_t MaxConsecutiveFramesGpuTimeOver33Ms;
    int32_t MaxConsecutiveFramesGpuTimeOver50Ms;
    int32_t MaxConsecutiveFramesFrameTimeOver25Ms;
    int32_t MaxConsecutiveFramesFrameTimeOver33Ms;
    int32_t MaxConsecutiveFramesFrameTimeOver50Ms;
    int32_t MaxConsecutiveFramesFrameTimeOver1000Ms;
    int32_t MaxSceneUnloadsSinceLastResourceCollect;
    int32_t InstantiationsUnpooled;
    int32_t InstantiationsExhausted;
    int32_t InstantiationsPooled;
    uint64_t HeapSize;
    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCharacterHeartbeatEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
