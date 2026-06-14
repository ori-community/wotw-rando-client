#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_DEFINED)
#include <Modloader/app/structs/SortedList__Fields.h>
#if defined(IL2CPP_STRUCT_SortedList__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_DEFINED
struct SortedList;
struct Object;
struct SortedList_SyncSortedList__Fields {
    struct SortedList__Fields _;
    struct SortedList* _list;
    struct Object* _root;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_FWDDECL)
#define IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList.h>
#endif
#undef IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_FWDDECL)
#include <Modloader/app/structs/SortedList_SyncSortedList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_SyncSortedList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
