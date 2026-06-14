#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_UriBuilder__Fields_DEFINED
struct String;
struct Uri;
struct __declspec(align(8)) UriBuilder__Fields {
    bool _changed;
    struct String* _fragment;
    struct String* _host;
    struct String* _password;
    struct String* _path;
    int32_t _port;
    struct String* _query;
    struct String* _scheme;
    struct String* _schemeDelimiter;
    struct Uri* _uri;
    struct String* _username;
};
#endif
#if !defined(IL2CPP_STRUCT_UriBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_UriBuilder__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_UriBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UriBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/UriBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
