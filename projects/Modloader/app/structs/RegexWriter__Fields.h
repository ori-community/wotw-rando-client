#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexWriter__Fields_DEFINED
struct Int32__Array;
struct Dictionary_2_System_String_System_Int32_;
struct List_1_System_String_;
struct Hashtable;
struct __declspec(align(8)) RegexWriter__Fields {
    struct Int32__Array* _intStack;
    int32_t _depth;
    struct Int32__Array* _emitted;
    int32_t _curpos;
    struct Dictionary_2_System_String_System_Int32_* _stringhash;
    struct List_1_System_String_* _stringtable;
    bool _counting;
    int32_t _count;
    int32_t _trackcount;
    struct Hashtable* _caps;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexWriter__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_RegexWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexWriter__Fields_FWDDECL)
#include <Modloader/app/structs/RegexWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
