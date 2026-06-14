#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleNPCEntity__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleNPCEntity__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity__VTable_DEFINED)
#define IL2CPP_STRUCT_SimpleNPCEntity__VTable_DEFINED
struct SimpleNPCEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_InteractableType;
    VirtualInvokeData CanInteractWithCharacter;
    VirtualInvokeData OnInteractionStart;
    VirtualInvokeData InteractionUpdate;
    VirtualInvokeData OnInteractionEnd;
    VirtualInvokeData ShouldFinishInteraction;
    VirtualInvokeData get_ActivationMode;
    VirtualInvokeData get_ActivationButton;
    VirtualInvokeData get_InteractionMessageHint;
    VirtualInvokeData get_DialogActorName;
    VirtualInvokeData get_DialogActorAnimator;
    VirtualInvokeData get_DialogActorPosition;
    VirtualInvokeData get_InteractionActorName;
    VirtualInvokeData get_InteractionActorAnimator;
    VirtualInvokeData get_InteractionActorPosition;
    VirtualInvokeData InteractionUpdate_1;
    VirtualInvokeData OnInteractionEnd_1;
    VirtualInvokeData get_ActivationButton_1;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity__VTable_FWDDECL)
#define IL2CPP_STRUCT_SimpleNPCEntity__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleNPCEntity__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNPCEntity__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SimpleNPCEntity__VTable_FWDDECL)
#include <Modloader/app/structs/SimpleNPCEntity__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleNPCEntity__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
