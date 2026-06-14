#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBindingList__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBindingList__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBindingList__VTable_DEFINED)
#define IL2CPP_STRUCT_IBindingList__VTable_DEFINED
struct IBindingList__VTable {
    VirtualInvokeData get_AllowNew;
    VirtualInvokeData AddNew;
    VirtualInvokeData get_AllowEdit;
    VirtualInvokeData get_AllowRemove;
    VirtualInvokeData get_SupportsChangeNotification;
    VirtualInvokeData get_SupportsSearching;
    VirtualInvokeData get_SupportsSorting;
    VirtualInvokeData get_IsSorted;
    VirtualInvokeData get_SortProperty;
    VirtualInvokeData get_SortDirection;
    VirtualInvokeData add_ListChanged;
    VirtualInvokeData remove_ListChanged;
    VirtualInvokeData AddIndex;
    VirtualInvokeData ApplySort;
    VirtualInvokeData Find;
    VirtualInvokeData RemoveIndex;
    VirtualInvokeData RemoveSort;
};
#endif
#if !defined(IL2CPP_STRUCT_IBindingList__VTable_FWDDECL)
#define IL2CPP_STRUCT_IBindingList__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IBindingList__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBindingList__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IBindingList__VTable_FWDDECL)
#include <Modloader/app/structs/IBindingList__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBindingList__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
