#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_DEFINED
struct UberPoolPerfTest_ProfileTimings {
    int32_t SampleCount;
    double Median;
    double MedianAbsoluteDeviation;
    double Mean;
    double TrimmedMean;
    double Peak;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_ProfileTimings_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_ProfileTimings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_ProfileTimings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
