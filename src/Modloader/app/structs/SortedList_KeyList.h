#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_KeyList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_KeyList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_KeyList_DEFINED)
#include <Modloader/app/structs/SortedList_KeyList__Fields.h>
#if defined(IL2CPP_STRUCT_SortedList_KeyList__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_KeyList_DEFINED
struct SortedList_KeyList__Class;
struct SortedList_KeyList {
    struct SortedList_KeyList__Class* klass;
    MonitorData* monitor;
    struct SortedList_KeyList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortedList_KeyList_FWDDECL)
#define IL2CPP_STRUCT_SortedList_KeyList_FWDDECL
#include <Modloader/app/structs/SortedList_KeyList__Class.h>
#endif
#undef IL2CPP_STRUCT_SortedList_KeyList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_KeyList_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_KeyList_FWDDECL)
#include <Modloader/app/structs/SortedList_KeyList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_KeyList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
