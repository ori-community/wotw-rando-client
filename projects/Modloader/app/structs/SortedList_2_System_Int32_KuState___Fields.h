#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_DEFINED)
#define IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_DEFINED
struct Int32__Array;
struct KuState__Array;
struct IComparer_1_System_Int32_;
struct SortedList_2_TKey_TValue_KeyList_System_Int32_KuState_;
struct SortedList_2_TKey_TValue_ValueList_System_Int32_KuState_;
struct Object;
struct __declspec(align(8)) SortedList_2_System_Int32_KuState___Fields {
    struct Int32__Array* keys;
    struct KuState__Array* values;
    int32_t _size;
    int32_t version;
    struct IComparer_1_System_Int32_* comparer;
    struct SortedList_2_TKey_TValue_KeyList_System_Int32_KuState_* keyList;
    struct SortedList_2_TKey_TValue_ValueList_System_Int32_KuState_* valueList;
    struct Object* _syncRoot;
};
#endif
#if !defined(IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_FWDDECL)
#define IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_FWDDECL
#include <Modloader/app/structs/IComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/KuState__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_KeyList_System_Int32_KuState_.h>
#include <Modloader/app/structs/SortedList_2_TKey_TValue_ValueList_System_Int32_KuState_.h>
#endif
#undef IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortedList_2_System_Int32_KuState___Fields_FWDDECL)
#include <Modloader/app/structs/SortedList_2_System_Int32_KuState___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortedList_2_System_Int32_KuState___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
