#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_DEFINED
struct String__Array;
struct Object__Array;
struct IComparer_1_System_String_;
struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object_;
struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object_;
struct Object;
struct __declspec(align(8)) SortedList_2_System_String_System_Object___Fields {
    struct String__Array* keys;
    struct Object__Array* values;
    int32_t _size;
    int32_t version;
    struct IComparer_1_System_String_* comparer;
    struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object_* keyList;
    struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object_* valueList;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/IComparer_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_KeyList_System_String_System_Object_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_ValueList_System_String_System_Object_.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_2_System_String_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/SortedList_2_System_String_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_2_System_String_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
