#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_DEFINED
struct List_1_System_String_;
struct HttpListener;
struct __declspec(align(8)) HttpListenerPrefixCollection__Fields {
    struct List_1_System_String_* prefixes;
    struct HttpListener* listener;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_FWDDECL
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_FWDDECL)
#include <Modloader/app/structs/HttpListenerPrefixCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerPrefixCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
