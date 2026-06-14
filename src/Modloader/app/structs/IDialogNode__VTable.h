#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDialogNode__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDialogNode__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogNode__VTable_DEFINED)
#define IL2CPP_STRUCT_IDialogNode__VTable_DEFINED
struct IDialogNode__VTable {
    VirtualInvokeData Initialize;
    VirtualInvokeData get_Actor;
    VirtualInvokeData get_MessageProvider;
    VirtualInvokeData get_Transitions;
    VirtualInvokeData get_Decorators;
    VirtualInvokeData get_MessageActiveAndEnable;
    VirtualInvokeData get_HideUiHidables;
};
#endif
#if !defined(IL2CPP_STRUCT_IDialogNode__VTable_FWDDECL)
#define IL2CPP_STRUCT_IDialogNode__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IDialogNode__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogNode__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IDialogNode__VTable_FWDDECL)
#include <Modloader/app/structs/IDialogNode__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDialogNode__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
