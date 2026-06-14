#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_DEFINED)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_DEFINED
struct Func_2_Object_DateTime_;
struct IComparer_1_System_DateTime_;
struct EnumerableSorter_1_System_Object_;
struct DateTime__Array;
struct __declspec(align(8)) EnumerableSorter_2_System_Object_System_DateTime___Fields {
    struct Func_2_Object_DateTime_* keySelector;
    struct IComparer_1_System_DateTime_* comparer;
    bool descending;
    struct EnumerableSorter_1_System_Object_* next;
    struct DateTime__Array* keys;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_FWDDECL
#include <Modloader/app/structs/DateTime__Array.h>
#include <Modloader/app/structs/EnumerableSorter_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_DateTime_.h>
#include <Modloader/app/structs/IComparer_1_System_DateTime_.h>
#endif
#undef IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Object_System_DateTime___Fields_FWDDECL)
#include <Modloader/app/structs/EnumerableSorter_2_System_Object_System_DateTime___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumerableSorter_2_System_Object_System_DateTime___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
