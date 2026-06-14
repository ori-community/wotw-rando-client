#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Robin__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Robin__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Robin__VTable_DEFINED)
#define IL2CPP_STRUCT_Robin__VTable_DEFINED
struct Robin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};
#endif
#if !defined(IL2CPP_STRUCT_Robin__VTable_FWDDECL)
#define IL2CPP_STRUCT_Robin__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Robin__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Robin__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Robin__VTable_FWDDECL)
#include <Modloader/app/structs/Robin__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Robin__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
