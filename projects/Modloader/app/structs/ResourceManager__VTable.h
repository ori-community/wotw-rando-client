#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceManager__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceManager__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager__VTable_DEFINED)
#define IL2CPP_STRUCT_ResourceManager__VTable_DEFINED
struct ResourceManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_BaseName;
    VirtualInvokeData get_IgnoreCase;
    VirtualInvokeData GetResourceFileName;
    VirtualInvokeData GetResourceSet;
    VirtualInvokeData InternalGetResourceSet;
    VirtualInvokeData GetString;
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceManager__VTable_FWDDECL)
#define IL2CPP_STRUCT_ResourceManager__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ResourceManager__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceManager__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ResourceManager__VTable_FWDDECL)
#include <Modloader/app/structs/ResourceManager__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceManager__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
