#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_DEFINED)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_DEFINED
struct Func_2_Object_Int64_;
struct IComparer_1_System_Int64_;
struct EnumerableSorter_1_System_Object_;
struct Int64__Array;
struct __declspec(align(8)) EnumerableSorter_2_System_Object_System_Int64___Fields {
    struct Func_2_Object_Int64_* keySelector;
    struct IComparer_1_System_Int64_* comparer;
    bool descending;
    struct EnumerableSorter_1_System_Object_* next;
    struct Int64__Array* keys;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_FWDDECL
#include <Modloader/app/structs/EnumerableSorter_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Int64_.h>
#include <Modloader/app/structs/IComparer_1_System_Int64_.h>
#include <Modloader/app/structs/Int64__Array.h>
#endif
#undef IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Int64___Fields_FWDDECL)
#include <Modloader/app/structs/EnumerableSorter_2_System_Object_System_Int64___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumerableSorter_2_System_Object_System_Int64___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
