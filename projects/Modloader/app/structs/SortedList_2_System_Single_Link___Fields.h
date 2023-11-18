#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_DEFINED
struct Single__Array;
struct Link__Array;
struct IComparer_1_System_Single_;
struct SortedList_2_TKey_TValue_KeyList_System_Single_Link_;
struct SortedList_2_TKey_TValue_ValueList_System_Single_Link_;
struct Object;
struct __declspec(align(8)) SortedList_2_System_Single_Link___Fields {
    struct Single__Array* keys;
    struct Link__Array* values;
    int32_t _size;
    int32_t version;
    struct IComparer_1_System_Single_* comparer;
    struct SortedList_2_TKey_TValue_KeyList_System_Single_Link_* keyList;
    struct SortedList_2_TKey_TValue_ValueList_System_Single_Link_* valueList;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_FWDDECL)
#define IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_FWDDECL
#include <Modloader/app/structs/IComparer_1_System_Single_.h>
#include <Modloader/app/structs/Link__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_KeyList_System_Single_Link_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_ValueList_System_Single_Link_.h>
#endif
#undef IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_2_System_Single_Link___Fields_FWDDECL)
#include <Modloader/app/structs/SortedList_2_System_Single_Link___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_2_System_Single_Link___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
