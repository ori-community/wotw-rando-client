#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_DEFINED)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_DEFINED
struct Func_2_Int32_Int32_;
struct IComparer_1_System_Int32_;
struct EnumerableSorter_1_System_Int32_;
struct Int32__Array;
struct __declspec(align(8)) EnumerableSorter_2_System_Int32_System_Int32___Fields {
    struct Func_2_Int32_Int32_* keySelector;
    struct IComparer_1_System_Int32_* comparer;
    bool descending;
    struct EnumerableSorter_1_System_Int32_* next;
    struct Int32__Array* keys;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_FWDDECL
#include <Modloader/app/structs/EnumerableSorter_1_System_Int32_.h>
#include <Modloader/app/structs/Func_2_Int32_Int32_.h>
#include <Modloader/app/structs/IComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumerableSorter_2_System_Int32_System_Int32___Fields_FWDDECL)
#include <Modloader/app/structs/EnumerableSorter_2_System_Int32_System_Int32___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumerableSorter_2_System_Int32_System_Int32___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
