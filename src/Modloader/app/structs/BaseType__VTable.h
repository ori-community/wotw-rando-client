#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseType__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseType__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseType__VTable_DEFINED)
#define IL2CPP_STRUCT_BaseType__VTable_DEFINED
struct BaseType__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData get_Name;
    VirtualInvokeData IsValid;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseType__VTable_FWDDECL)
#define IL2CPP_STRUCT_BaseType__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_BaseType__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseType__VTable_DEFINED) && !defined(IL2CPP_STRUCT_BaseType__VTable_FWDDECL)
#include <Modloader/app/structs/BaseType__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseType__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
