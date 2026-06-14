#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_DEFINED)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_DEFINED
struct Func_2_Object_Single_;
struct IComparer_1_System_Single_;
struct EnumerableSorter_1_System_Object_;
struct Single__Array;
struct __declspec(align(8)) EnumerableSorter_2_System_Object_System_Single___Fields {
    struct Func_2_Object_Single_* keySelector;
    struct IComparer_1_System_Single_* comparer;
    bool descending;
    struct EnumerableSorter_1_System_Object_* next;
    struct Single__Array* keys;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_FWDDECL
#include <Modloader/app/structs/EnumerableSorter_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Single_.h>
#include <Modloader/app/structs/IComparer_1_System_Single_.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_Single___Fields_FWDDECL)
#include <Modloader/app/structs/EnumerableSorter_2_System_Object_System_Single___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumerableSorter_2_System_Object_System_Single___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
