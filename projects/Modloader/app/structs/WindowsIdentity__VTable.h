#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsIdentity__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsIdentity__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsIdentity__VTable_DEFINED)
#define IL2CPP_STRUCT_WindowsIdentity__VTable_DEFINED
struct WindowsIdentity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AuthenticationType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_AuthenticationType_1;
    VirtualInvokeData get_Claims;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData Clone;
    VirtualInvokeData AddClaim;
    VirtualInvokeData FindFirst;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    VirtualInvokeData Dispose;
    VirtualInvokeData Impersonate;
};
#endif
#if !defined(IL2CPP_STRUCT_WindowsIdentity__VTable_FWDDECL)
#define IL2CPP_STRUCT_WindowsIdentity__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_WindowsIdentity__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsIdentity__VTable_DEFINED) && !defined(IL2CPP_STRUCT_WindowsIdentity__VTable_FWDDECL)
#include <Modloader/app/structs/WindowsIdentity__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsIdentity__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
