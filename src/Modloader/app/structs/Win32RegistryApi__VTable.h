#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Win32RegistryApi__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Win32RegistryApi__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32RegistryApi__VTable_DEFINED)
#define IL2CPP_STRUCT_Win32RegistryApi__VTable_DEFINED
struct Win32RegistryApi__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OpenSubKey;
    VirtualInvokeData Flush;
    VirtualInvokeData Close;
    VirtualInvokeData GetValue;
    VirtualInvokeData GetSubKeyNames;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetHandle;
    VirtualInvokeData SubKeyCount;
};
#endif
#if !defined(IL2CPP_STRUCT_Win32RegistryApi__VTable_FWDDECL)
#define IL2CPP_STRUCT_Win32RegistryApi__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Win32RegistryApi__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Win32RegistryApi__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Win32RegistryApi__VTable_FWDDECL)
#include <Modloader/app/structs/Win32RegistryApi__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Win32RegistryApi__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
