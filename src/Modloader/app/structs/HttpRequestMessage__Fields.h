#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpRequestMessage__Fields_DEFINED
struct HttpRequestHeaders;
struct HttpMethod;
struct Version;
struct Dictionary_2_System_String_System_Object_;
struct Uri;
struct HttpContent;
struct __declspec(align(8)) HttpRequestMessage__Fields {
    struct HttpRequestHeaders* headers;
    struct HttpMethod* method;
    struct Version* version;
    struct Dictionary_2_System_String_System_Object_* properties;
    struct Uri* uri;
    bool is_used;
    bool disposed;
    struct HttpContent* _Content_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestMessage__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/HttpContent.h>
#include <Modloader/app/structs/HttpMethod.h>
#include <Modloader/app/structs/HttpRequestHeaders.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#endif
#undef IL2CPP_STRUCT_HttpRequestMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestMessage__Fields_FWDDECL)
#include <Modloader/app/structs/HttpRequestMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
