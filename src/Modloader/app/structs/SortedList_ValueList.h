#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_ValueList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_ValueList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_ValueList_DEFINED)
#include <Modloader/app/structs/SortedList_ValueList__Fields.h>
#if defined(IL2CPP_STRUCT_SortedList_ValueList__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_ValueList_DEFINED
struct SortedList_ValueList__Class;
struct SortedList_ValueList {
    struct SortedList_ValueList__Class* klass;
    MonitorData* monitor;
    struct SortedList_ValueList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortedList_ValueList_FWDDECL)
#define IL2CPP_STRUCT_SortedList_ValueList_FWDDECL
#include <Modloader/app/structs/SortedList_ValueList__Class.h>
#endif
#undef IL2CPP_STRUCT_SortedList_ValueList_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_ValueList_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_ValueList_FWDDECL)
#include <Modloader/app/structs/SortedList_ValueList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_ValueList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
