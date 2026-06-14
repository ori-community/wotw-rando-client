#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_DEFINED)
#include <Modloader/app/structs/SortedList__Fields.h>
#if defined(IL2CPP_STRUCT_SortedList__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_DEFINED
struct SortedList__Class;
struct SortedList {
    struct SortedList__Class* klass;
    MonitorData* monitor;
    struct SortedList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortedList_FWDDECL)
#define IL2CPP_STRUCT_SortedList_FWDDECL
#include <Modloader/app/structs/SortedList__Class.h>
#endif
#undef IL2CPP_STRUCT_SortedList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_FWDDECL)
#include <Modloader/app/structs/SortedList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
