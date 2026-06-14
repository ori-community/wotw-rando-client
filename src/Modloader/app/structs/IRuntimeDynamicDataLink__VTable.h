#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_DEFINED)
#define IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_DEFINED
struct IRuntimeDynamicDataLink__VTable {
    VirtualInvokeData get_TargetObject;
    VirtualInvokeData get_TargetMemberInfo;
    VirtualInvokeData get_ReturnedValueType;
    VirtualInvokeData get_IsValid;
    VirtualInvokeData GetSerializedData;
    VirtualInvokeData Init;
    VirtualInvokeData IsLinkForObjectAndMemberInfoCombo;
};
#endif
#if !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_FWDDECL)
#define IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IRuntimeDynamicDataLink__VTable_FWDDECL)
#include <Modloader/app/structs/IRuntimeDynamicDataLink__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRuntimeDynamicDataLink__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
