#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IHoldable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IHoldable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHoldable__VTable_DEFINED)
#define IL2CPP_STRUCT_IHoldable__VTable_DEFINED
struct IHoldable__VTable {
    VirtualInvokeData get_CanBeHeld;
    VirtualInvokeData get_CanBeUsed;
    VirtualInvokeData get_CanBeDropped;
    VirtualInvokeData OnPickedUp;
    VirtualInvokeData OnDropped;
    VirtualInvokeData get_Weapon;
    VirtualInvokeData BeginUse;
    VirtualInvokeData EndUse;
};
#endif
#if !defined(IL2CPP_STRUCT_IHoldable__VTable_FWDDECL)
#define IL2CPP_STRUCT_IHoldable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IHoldable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHoldable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IHoldable__VTable_FWDDECL)
#include <Modloader/app/structs/IHoldable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IHoldable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
