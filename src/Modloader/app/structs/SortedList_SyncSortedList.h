#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_SyncSortedList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_SyncSortedList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_SyncSortedList_DEFINED)
#include <Modloader/app/structs/SortedList_SyncSortedList__Fields.h>
#if defined(IL2CPP_STRUCT_SortedList_SyncSortedList__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_SyncSortedList_DEFINED
struct SortedList_SyncSortedList__Class;
struct SortedList_SyncSortedList {
    struct SortedList_SyncSortedList__Class* klass;
    MonitorData* monitor;
    struct SortedList_SyncSortedList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortedList_SyncSortedList_FWDDECL)
#define IL2CPP_STRUCT_SortedList_SyncSortedList_FWDDECL
#include <Modloader/app/structs/SortedList_SyncSortedList__Class.h>
#endif
#undef IL2CPP_STRUCT_SortedList_SyncSortedList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_SyncSortedList_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_SyncSortedList_FWDDECL)
#include <Modloader/app/structs/SortedList_SyncSortedList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_SyncSortedList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
