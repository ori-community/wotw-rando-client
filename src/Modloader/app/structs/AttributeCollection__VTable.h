#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeCollection__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeCollection__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection__VTable_DEFINED)
#define IL2CPP_STRUCT_AttributeCollection__VTable_DEFINED
struct AttributeCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_ICollection_get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_Item;
    VirtualInvokeData get_Item_1;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeCollection__VTable_FWDDECL)
#define IL2CPP_STRUCT_AttributeCollection__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_AttributeCollection__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection__VTable_DEFINED) && !defined(IL2CPP_STRUCT_AttributeCollection__VTable_FWDDECL)
#include <Modloader/app/structs/AttributeCollection__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeCollection__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
