#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineEntityParent__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineEntityParent__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntityParent__VTable_DEFINED)
#define IL2CPP_STRUCT_ITimelineEntityParent__VTable_DEFINED
struct ITimelineEntityParent__VTable {
    VirtualInvokeData get_EntityRecords;
    VirtualInvokeData get_ConstraintMetaDatas;
    VirtualInvokeData get_MarkerRecords;
    VirtualInvokeData get_ExternalRecords;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData RecursivelySetupExecutionOrder;
    VirtualInvokeData get_TrimController;
    VirtualInvokeData set_TrimController;
    VirtualInvokeData get_FullAddress;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineEntityParent__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITimelineEntityParent__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITimelineEntityParent__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntityParent__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineEntityParent__VTable_FWDDECL)
#include <Modloader/app/structs/ITimelineEntityParent__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineEntityParent__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
