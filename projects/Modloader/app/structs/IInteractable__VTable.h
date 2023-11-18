#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInteractable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInteractable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractable__VTable_DEFINED)
#define IL2CPP_STRUCT_IInteractable__VTable_DEFINED
struct IInteractable__VTable {
    VirtualInvokeData SetInteraction;
    VirtualInvokeData RemoveInteraction;
    VirtualInvokeData DoesOverlap;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetExplodePoint;
    VirtualInvokeData MaxRadius;
    VirtualInvokeData OnRegistered;
    VirtualInvokeData IsWater;
    VirtualInvokeData get_Index;
    VirtualInvokeData set_Index;
    VirtualInvokeData get_IsRegistered;
    VirtualInvokeData set_IsRegistered;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_IsStatic;
};
#endif
#if !defined(IL2CPP_STRUCT_IInteractable__VTable_FWDDECL)
#define IL2CPP_STRUCT_IInteractable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IInteractable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IInteractable__VTable_FWDDECL)
#include <Modloader/app/structs/IInteractable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInteractable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
