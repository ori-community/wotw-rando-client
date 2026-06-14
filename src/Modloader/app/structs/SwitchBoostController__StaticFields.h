#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchBoostController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchBoostController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchBoostController__StaticFields_DEFINED)
#include <Modloader/app/structs/SwitchBoostController_HandheldGPUBoostMode__Enum.h>
#if defined(IL2CPP_STRUCT_SwitchBoostController_HandheldGPUBoostMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SwitchBoostController__StaticFields_DEFINED
struct Single__Array;
struct SwitchBoostController__StaticFields {
    int32_t HISTORY_LENGTH;
    int32_t s_historyIndex;
    struct Single__Array* s_gpuHistory;
    struct Single__Array* s_drsHistory;
    int32_t s_consecutiveSamplesBelowDRSThreshold;
    int32_t s_consecutiveSamplesAboveDRSThreshold;
    int32_t s_badSamplesRequiredToIncreaseBoost;
    int32_t s_goodSamplesRequiredToDecreaseBoost;
    float s_drsThreshold;
    SwitchBoostController_HandheldGPUBoostMode__Enum s_handheldPerformanceConfiguration;

    bool s_cpuBoost;
    bool s_autoGpuBoost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchBoostController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SwitchBoostController__StaticFields_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_SwitchBoostController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchBoostController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchBoostController__StaticFields_FWDDECL)
#include <Modloader/app/structs/SwitchBoostController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchBoostController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
