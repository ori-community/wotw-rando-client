#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDictionary__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDictionary__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionary__VTable_DEFINED)
#define IL2CPP_STRUCT_IDictionary__VTable_DEFINED
struct IDictionary__VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData Contains;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData Remove;
};
#endif
#if !defined(IL2CPP_STRUCT_IDictionary__VTable_FWDDECL)
#define IL2CPP_STRUCT_IDictionary__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IDictionary__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionary__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IDictionary__VTable_FWDDECL)
#include <Modloader/app/structs/IDictionary__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDictionary__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
