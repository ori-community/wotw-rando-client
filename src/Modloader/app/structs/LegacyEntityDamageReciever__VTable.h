#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_DEFINED)
#define IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_DEFINED
struct LegacyEntityDamageReciever__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
    VirtualInvokeData OnTimedRespawn;
    VirtualInvokeData RegisterRespawnDelegate;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_StressTestName;
    VirtualInvokeData StartStressTest;
    VirtualInvokeData StressTestUpdate;
    VirtualInvokeData EndStressTest;
    VirtualInvokeData get_StressTestStatus;
    VirtualInvokeData set_StressTestStatus;
    VirtualInvokeData get_CanExecuteStressTest;
    VirtualInvokeData get_StopMovingPlayerWhilePerforming;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData get_DisableTarget;
    VirtualInvokeData OnRecieveDamage_1;
    VirtualInvokeData StressTestUpdate_1;
    VirtualInvokeData CanDetonateProjectiles;
};
#endif
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_FWDDECL)
#define IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__VTable_FWDDECL)
#include <Modloader/app/structs/LegacyEntityDamageReciever__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEntityDamageReciever__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
