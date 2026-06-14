#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPickupProcessor__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPickupProcessor__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor__VTable_DEFINED)
#define IL2CPP_STRUCT_SeinPickupProcessor__VTable_DEFINED
struct SeinPickupProcessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData OnCollectPickup;
    VirtualInvokeData OnCollectExpOrbPickup;
    VirtualInvokeData OnCollectOrePickup;
    VirtualInvokeData OnCollectSkillPointPickup;
    VirtualInvokeData OnCollectEnergyOrbPickup;
    VirtualInvokeData OnCollectMaxEnergyContainerPickup;
    VirtualInvokeData OnCollectMaxEnergyHalfContainerPickup;
    VirtualInvokeData OnCollectKeystonePickup;
    VirtualInvokeData OnCollectRestoreHealthPickup;
    VirtualInvokeData OnCollectMaxHealthContainerPickup;
    VirtualInvokeData OnCollectMaxHealthHalfContainerPickup;
    VirtualInvokeData OnCollectMapStonePickup;
    VirtualInvokeData OnCollectSpiritShardPickup;
    VirtualInvokeData OnCollectQuestItemPickup;
    VirtualInvokeData OnCollectedShardSlotUpgrade;
    VirtualInvokeData SetReferenceToSein;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor__VTable_FWDDECL)
#define IL2CPP_STRUCT_SeinPickupProcessor__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinPickupProcessor__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SeinPickupProcessor__VTable_FWDDECL)
#include <Modloader/app/structs/SeinPickupProcessor__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPickupProcessor__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
