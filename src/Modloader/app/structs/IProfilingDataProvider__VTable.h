#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IProfilingDataProvider__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IProfilingDataProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProfilingDataProvider__VTable_DEFINED)
#define IL2CPP_STRUCT_IProfilingDataProvider__VTable_DEFINED
struct IProfilingDataProvider__VTable {
    VirtualInvokeData get_SupportsGraph;
    VirtualInvokeData get_SupportsInspector;
    VirtualInvokeData get_SupportsMarkers;
    VirtualInvokeData get_HistorySize;
    VirtualInvokeData get_NumMetrics;
    VirtualInvokeData get_NumMarkers;
    VirtualInvokeData get_CurrentFrameIndex;
    VirtualInvokeData get_LastCompletedFrameID;
    VirtualInvokeData get_SupportedMetrics;
    VirtualInvokeData GetMetricValueInMS;
    VirtualInvokeData GetLastCompletedMetricValueInMS;
    VirtualInvokeData GetAverageMetricTimeInMSInFrameRange;
    VirtualInvokeData GetPeakMetricTimeInMSInFrameRange;
    VirtualInvokeData get_IsPaused;
    VirtualInvokeData AddPreEndFrameHandler;
    VirtualInvokeData AddPostBeginFrameHandler;
    VirtualInvokeData RemovePreEndFrameHandler;
    VirtualInvokeData RemovePostBeginFrameHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_IProfilingDataProvider__VTable_FWDDECL)
#define IL2CPP_STRUCT_IProfilingDataProvider__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IProfilingDataProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IProfilingDataProvider__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IProfilingDataProvider__VTable_FWDDECL)
#include <Modloader/app/structs/IProfilingDataProvider__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IProfilingDataProvider__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
