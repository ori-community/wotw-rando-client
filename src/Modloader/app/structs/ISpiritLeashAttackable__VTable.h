#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_DEFINED)
#define IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_DEFINED
struct ISpiritLeashAttackable__VTable {
    VirtualInvokeData get_SpiritLeashCost;
    VirtualInvokeData OnSpiritLeashHighlight;
    VirtualInvokeData OnSpiritLeashDehighlight;
    VirtualInvokeData OnSpiritLeashed;
    VirtualInvokeData get_HookTargetTransform;
    VirtualInvokeData get_PositionOffset;
    VirtualInvokeData get_OriCloseEnoughDistance;
    VirtualInvokeData get_ShouldDecelerateOnApproach;
    VirtualInvokeData get_CanBeSustained;
    VirtualInvokeData get_LeashInteractionMode;
};
#endif
#if !defined(IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_FWDDECL)
#define IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ISpiritLeashAttackable__VTable_FWDDECL)
#include <Modloader/app/structs/ISpiritLeashAttackable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISpiritLeashAttackable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
