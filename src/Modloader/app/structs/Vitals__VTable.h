#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vitals__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vitals__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals__VTable_DEFINED)
#define IL2CPP_STRUCT_Vitals__VTable_DEFINED
struct Vitals__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_Health;
    VirtualInvokeData get_MaxHealth;
    VirtualInvokeData SetHealth;
    VirtualInvokeData SetHealthAndDontNotify;
    VirtualInvokeData SetMaxHealth;
    VirtualInvokeData Awake;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnDamageResultReceived;
    VirtualInvokeData StressTestUpdate_1;
};
#endif
#if !defined(IL2CPP_STRUCT_Vitals__VTable_FWDDECL)
#define IL2CPP_STRUCT_Vitals__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vitals__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Vitals__VTable_FWDDECL)
#include <Modloader/app/structs/Vitals__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vitals__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
