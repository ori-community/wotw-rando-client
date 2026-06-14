#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobRanges_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobRanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobRanges_DEFINED)
#define IL2CPP_STRUCT_JobRanges_DEFINED
struct JobRanges {
    int32_t BatchSize;
    int32_t NumJobs;
    int32_t TotalIterationCount;
    int32_t NumPhases;
    int32_t IndicesPerPhase;
    void* StartEndIndex;
    void* PhaseData;
};
#endif
#if !defined(IL2CPP_STRUCT_JobRanges_FWDDECL)
#define IL2CPP_STRUCT_JobRanges_FWDDECL
#endif
#undef IL2CPP_STRUCT_JobRanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobRanges_DEFINED) && !defined(IL2CPP_STRUCT_JobRanges_FWDDECL)
#include <Modloader/app/structs/JobRanges.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobRanges.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
