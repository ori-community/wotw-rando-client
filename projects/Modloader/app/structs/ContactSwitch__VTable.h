#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactSwitch__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactSwitch__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitch__VTable_DEFINED)
#define IL2CPP_STRUCT_ContactSwitch__VTable_DEFINED
struct ContactSwitch__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnTriggerEnable;
    VirtualInvokeData OnTriggerDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnTriggerActivated;
    VirtualInvokeData get_Category;
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
    VirtualInvokeData get_IsOn;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};
#endif
#if !defined(IL2CPP_STRUCT_ContactSwitch__VTable_FWDDECL)
#define IL2CPP_STRUCT_ContactSwitch__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContactSwitch__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitch__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ContactSwitch__VTable_FWDDECL)
#include <Modloader/app/structs/ContactSwitch__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactSwitch__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
