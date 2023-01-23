#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IIndexedItem__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IIndexedItem__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIndexedItem__VTable_DEFINED)
#define IL2CPP_STRUCT_IIndexedItem__VTable_DEFINED
struct IIndexedItem__VTable {
    VirtualInvokeData get_Index;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_NotMappable;
};
#endif
#if !defined(IL2CPP_STRUCT_IIndexedItem__VTable_FWDDECL)
#define IL2CPP_STRUCT_IIndexedItem__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IIndexedItem__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIndexedItem__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IIndexedItem__VTable_FWDDECL)
#include <Modloader/app/structs/IIndexedItem__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IIndexedItem__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
