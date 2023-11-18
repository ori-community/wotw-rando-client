#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringConcat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringConcat_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringConcat_DEFINED)
#define IL2CPP_STRUCT_StringConcat_DEFINED
struct String;
struct List_1_System_String_;
struct StringConcat {
    struct String* s1;
    struct String* s2;
    struct String* s3;
    struct String* s4;
    struct String* delimiter;
    struct List_1_System_String_* strList;
    int32_t idxStr;
};
#endif
#if !defined(IL2CPP_STRUCT_StringConcat_FWDDECL)
#define IL2CPP_STRUCT_StringConcat_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StringConcat_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringConcat_DEFINED) && !defined(IL2CPP_STRUCT_StringConcat_FWDDECL)
#include <Modloader/app/structs/StringConcat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringConcat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
