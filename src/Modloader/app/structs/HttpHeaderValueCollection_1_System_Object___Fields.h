#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_DEFINED
struct List_1_System_Object_;
struct HeaderInfo_1;
struct List_1_System_String_;
struct __declspec(align(8)) HttpHeaderValueCollection_1_System_Object___Fields {
    struct List_1_System_Object_* list;
    struct HeaderInfo_1* headerInfo;
    struct List_1_System_String_* invalidValues;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/HeaderInfo_1.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpHeaderValueCollection_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/HttpHeaderValueCollection_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpHeaderValueCollection_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
