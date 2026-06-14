#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeStateOnCondition__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeStateOnCondition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition__VTable_DEFINED)
#define IL2CPP_STRUCT_ChangeStateOnCondition__VTable_DEFINED
struct ChangeStateOnCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData OnSkipCutscene;
};
#endif
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition__VTable_FWDDECL)
#define IL2CPP_STRUCT_ChangeStateOnCondition__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChangeStateOnCondition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ChangeStateOnCondition__VTable_FWDDECL)
#include <Modloader/app/structs/ChangeStateOnCondition__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeStateOnCondition__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
