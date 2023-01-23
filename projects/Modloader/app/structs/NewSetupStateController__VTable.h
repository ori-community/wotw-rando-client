#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewSetupStateController__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewSetupStateController__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController__VTable_DEFINED)
#define IL2CPP_STRUCT_NewSetupStateController__VTable_DEFINED
struct NewSetupStateController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData GetDynamicGraphicTargets;
    VirtualInvokeData GetManagedEarlyZDynamicGraphicTargets;
    VirtualInvokeData get_GuidStr;
    VirtualInvokeData get_TargetObject;
    VirtualInvokeData get_TargetComponent;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData ApplyKnownState;
    VirtualInvokeData GetStateName;
    VirtualInvokeData GetAllStateGUIDs;
    VirtualInvokeData HasStateGUID;
    VirtualInvokeData get_IsPassiveStateDescriptorValid;
    VirtualInvokeData get_CurrentPassiveStateApplied;
    VirtualInvokeData get_FallbackPassiveState;
    VirtualInvokeData OnPostTimeSlicedEnable;
};
#endif
#if !defined(IL2CPP_STRUCT_NewSetupStateController__VTable_FWDDECL)
#define IL2CPP_STRUCT_NewSetupStateController__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_NewSetupStateController__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController__VTable_DEFINED) && !defined(IL2CPP_STRUCT_NewSetupStateController__VTable_FWDDECL)
#include <Modloader/app/structs/NewSetupStateController__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewSetupStateController__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
