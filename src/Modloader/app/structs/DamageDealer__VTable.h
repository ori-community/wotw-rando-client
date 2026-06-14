#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageDealer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageDealer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealer__VTable_DEFINED)
#define IL2CPP_STRUCT_DamageDealer__VTable_DEFINED
struct DamageDealer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEnterPhysicsTrigger;
    VirtualInvokeData get_VirtualTimelineTarget;
    VirtualInvokeData get_VirtualTimelineGroup;
    VirtualInvokeData get_NameDisplayedOnClip;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_BypassPlayerInvincibility;
    VirtualInvokeData AmountOfDamage;
    VirtualInvokeData Awake;
    VirtualInvokeData ApplyDamageToCollider;
    VirtualInvokeData DealDamage;
};
#endif
#if !defined(IL2CPP_STRUCT_DamageDealer__VTable_FWDDECL)
#define IL2CPP_STRUCT_DamageDealer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageDealer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DamageDealer__VTable_FWDDECL)
#include <Modloader/app/structs/DamageDealer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageDealer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
