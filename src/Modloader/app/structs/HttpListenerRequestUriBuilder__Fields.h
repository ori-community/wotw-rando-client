#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_DEFINED
struct String;
struct StringBuilder;
struct List_1_System_Byte_;
struct Uri;
struct __declspec(align(8)) HttpListenerRequestUriBuilder__Fields {
    struct String* rawUri;
    struct String* cookedUriScheme;
    struct String* cookedUriHost;
    struct String* cookedUriPath;
    struct String* cookedUriQuery;
    struct StringBuilder* requestUriString;
    struct List_1_System_Byte_* rawOctets;
    struct String* rawPath;
    struct Uri* requestUri;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Byte_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerRequestUriBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/HttpListenerRequestUriBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerRequestUriBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
