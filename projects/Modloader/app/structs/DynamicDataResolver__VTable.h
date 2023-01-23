#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataResolver__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataResolver__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataResolver__VTable_DEFINED)
#define IL2CPP_STRUCT_DynamicDataResolver__VTable_DEFINED
struct DynamicDataResolver__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ResolveSource;
    VirtualInvokeData CanResolveSource;
    VirtualInvokeData IsMoonTypeProxy;
    VirtualInvokeData GetProxyType;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataResolver__VTable_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataResolver__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DynamicDataResolver__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataResolver__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataResolver__VTable_FWDDECL)
#include <Modloader/app/structs/DynamicDataResolver__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataResolver__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
