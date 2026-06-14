#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_DEFINED
struct Object;
struct List_1_System_String_;
struct Func_2_Object_String_;
struct __declspec(align(8)) HttpHeaders_HeaderBucket__Fields {
    struct Object* Parsed;
    struct List_1_System_String_* values;
    struct Func_2_Object_String_* CustomToString;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_FWDDECL
#include <Modloader/app/structs/Func_2_Object_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_FWDDECL)
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
