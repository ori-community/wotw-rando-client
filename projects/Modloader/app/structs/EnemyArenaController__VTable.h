#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaController__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaController__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController__VTable_DEFINED)
#define IL2CPP_STRUCT_EnemyArenaController__VTable_DEFINED
struct EnemyArenaController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData CreateTimelineParentEntity;
    VirtualInvokeData get_AddChildren;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData GetAllConditionNames;
    VirtualInvokeData GetAllConditionGuids;
    VirtualInvokeData GetConditionNameFromGuid;
    VirtualInvokeData IsConditionGuidValid;
    VirtualInvokeData Validate;
};
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaController__VTable_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaController__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_EnemyArenaController__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController__VTable_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaController__VTable_FWDDECL)
#include <Modloader/app/structs/EnemyArenaController__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaController__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
