#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList__Fields_DEFINED
struct Object__Array;
struct IComparer;
struct SortedList_KeyList;
struct SortedList_ValueList;
struct Object;
struct __declspec(align(8)) SortedList__Fields {
    struct Object__Array* keys;
    struct Object__Array* values;
    int32_t _size;
    int32_t version;
    struct IComparer* comparer;
    struct SortedList_KeyList* keyList;
    struct SortedList_ValueList* valueList;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_SortedList__Fields_FWDDECL)
#define IL2CPP_STRUCT_SortedList__Fields_FWDDECL
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SortedList_KeyList.h>
#include <Modloader/app/structs/SortedList_ValueList.h>
#endif
#undef IL2CPP_STRUCT_SortedList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortedList__Fields_FWDDECL)
#include <Modloader/app/structs/SortedList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
