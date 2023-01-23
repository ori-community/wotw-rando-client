#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSSampleData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSSampleData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSSampleData__Fields_DEFINED)
#include <Modloader/app/structs/MoonProfilerFrame.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_MoonProfilerFrame_DEFINED)
#define IL2CPP_STRUCT_FPSSampleData__Fields_DEFINED
struct String;
struct MicroProfiler_SampleStats;
struct __declspec(align(8)) FPSSampleData__Fields {
    struct String* SampleID;
    int32_t AverageFPS;
    int32_t MinimumFPS;
    float AverageFrameTime;
    float MinFrameTime;
    int32_t CPUAverageFPS;
    int32_t CPUMinimumFPS;
    int32_t CPUBAverageFPS;
    int32_t CPUBMinimumFPS;
    float CPUBAverageFrameTime;
    float CPUBMinFrameTime;
    float TotalMemory;
    float TextureMemory;
    float AudioMemory;
    struct Vector3 SamplePosition;
    struct MoonProfilerFrame FrameData;
    int32_t DangerFrames;
    int32_t DroppedFrames_Single;
    int32_t DroppedFrames_Double;
    int32_t DroppedFrames_Triple;
    int32_t DroppedFrames_Multiple;
    struct MicroProfiler_SampleStats* MicroProfilerStats;
    int32_t ExceptionsCount;
    struct String* ExceptionMessages;
    int32_t HitchCount;
    int32_t SlowdownCount;
    int32_t Health;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSSampleData__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSSampleData__Fields_FWDDECL
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FPSSampleData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSSampleData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSSampleData__Fields_FWDDECL)
#include <Modloader/app/structs/FPSSampleData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSSampleData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
