#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostStateDefinition__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostStateDefinition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition__VTable_DEFINED)
#define IL2CPP_STRUCT_PostStateDefinition__VTable_DEFINED
struct PostStateDefinition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ApplyKnownState;
    VirtualInvokeData GetStateName;
    VirtualInvokeData GetAllStateGUIDs;
    VirtualInvokeData HasStateGUID;
    VirtualInvokeData get_IsPassiveStateDescriptorValid;
    VirtualInvokeData get_CurrentPassiveStateApplied;
    VirtualInvokeData get_FallbackPassiveState;
};
#endif
#if !defined(IL2CPP_STRUCT_PostStateDefinition__VTable_FWDDECL)
#define IL2CPP_STRUCT_PostStateDefinition__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PostStateDefinition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PostStateDefinition__VTable_FWDDECL)
#include <Modloader/app/structs/PostStateDefinition__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostStateDefinition__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
