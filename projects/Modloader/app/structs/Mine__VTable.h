#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mine__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mine__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mine__VTable_DEFINED)
#define IL2CPP_STRUCT_Mine__VTable_DEFINED
struct Mine__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
};
#endif
#if !defined(IL2CPP_STRUCT_Mine__VTable_FWDDECL)
#define IL2CPP_STRUCT_Mine__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Mine__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mine__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Mine__VTable_FWDDECL)
#include <Modloader/app/structs/Mine__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mine__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
