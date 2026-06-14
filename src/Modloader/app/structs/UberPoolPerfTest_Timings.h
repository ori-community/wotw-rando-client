#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_Timings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_Timings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_Timings_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_Timings_DEFINED
struct UberPoolPerfTest_Timings {
    int32_t SampleCount;
    int64_t Median;
    int64_t MedianAbsoluteDeviation;
    int64_t Mean;
    int64_t TrimmedMean;
    int64_t Peak;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_Timings_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_Timings_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_Timings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_Timings_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_Timings_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_Timings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_Timings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
