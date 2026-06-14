#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PowerFuse__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PowerFuse__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerFuse__VTable_DEFINED)
#define IL2CPP_STRUCT_PowerFuse__VTable_DEFINED
struct PowerFuse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData CanDetonateProjectiles;
    VirtualInvokeData get_DamageReceived;
    VirtualInvokeData set_DamageReceived;
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
    VirtualInvokeData get_VirtualTimelineTarget;
    VirtualInvokeData get_VirtualTimelineGroup;
    VirtualInvokeData get_NameDisplayedOnClip;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData Prewarm;
    VirtualInvokeData OnAwake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnRecieveDamage_1;
    VirtualInvokeData ResolveDamage;
    VirtualInvokeData OnAfterCollisions;
    VirtualInvokeData OnDamageResultReceived;
};
#endif
#if !defined(IL2CPP_STRUCT_PowerFuse__VTable_FWDDECL)
#define IL2CPP_STRUCT_PowerFuse__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PowerFuse__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerFuse__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PowerFuse__VTable_FWDDECL)
#include <Modloader/app/structs/PowerFuse__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PowerFuse__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
