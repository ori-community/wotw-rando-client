#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimeSlicedJob__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimeSlicedJob__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedJob__VTable_DEFINED)
#define IL2CPP_STRUCT_ITimeSlicedJob__VTable_DEFINED
struct ITimeSlicedJob__VTable {
    VirtualInvokeData OnUpdateBeat;
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData OnJobFinished;
    VirtualInvokeData get_IsFinished;
    VirtualInvokeData get_JobName;
    VirtualInvokeData get_TimesliceJobOwnerName;
    VirtualInvokeData get_CustomTimeBudget;
    VirtualInvokeData set_CustomTimeBudget;
    VirtualInvokeData get_ContextualDebugData;
    VirtualInvokeData get_EnqueuedTime;
    VirtualInvokeData set_EnqueuedTime;
    VirtualInvokeData get_AvailableBudget;
    VirtualInvokeData set_AvailableBudget;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimeSlicedJob__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITimeSlicedJob__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITimeSlicedJob__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedJob__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITimeSlicedJob__VTable_FWDDECL)
#include <Modloader/app/structs/ITimeSlicedJob__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimeSlicedJob__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
