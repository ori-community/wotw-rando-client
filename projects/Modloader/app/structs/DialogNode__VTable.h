#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogNode__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogNode__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNode__VTable_DEFINED)
#define IL2CPP_STRUCT_DialogNode__VTable_DEFINED
struct DialogNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData get_Actor;
    VirtualInvokeData get_MessageProvider;
    VirtualInvokeData get_Transitions;
    VirtualInvokeData get_Decorators;
    VirtualInvokeData get_MessageActiveAndEnable;
    VirtualInvokeData get_HideUiHidables;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_OnActivated;
    VirtualInvokeData set_OnActivated;
    VirtualInvokeData get_OnFinished;
    VirtualInvokeData set_OnFinished;
};
#endif
#if !defined(IL2CPP_STRUCT_DialogNode__VTable_FWDDECL)
#define IL2CPP_STRUCT_DialogNode__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DialogNode__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNode__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DialogNode__VTable_FWDDECL)
#include <Modloader/app/structs/DialogNode__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogNode__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
