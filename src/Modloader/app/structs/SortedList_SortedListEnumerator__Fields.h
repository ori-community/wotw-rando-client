#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_DEFINED
struct SortedList;
struct Object;
struct __declspec(align(8)) SortedList_SortedListEnumerator__Fields {
    struct SortedList* sortedList;
    struct Object* key;
    struct Object* value;
    int32_t index;
    int32_t startIndex;
    int32_t endIndex;
    int32_t version;
    bool current;
    int32_t getObjectRetType;
};
#endif
#if !defined(IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList.h>
#endif
#undef IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_SortedListEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/SortedList_SortedListEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_SortedListEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
