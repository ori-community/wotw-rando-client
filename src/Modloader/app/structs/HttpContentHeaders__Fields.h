#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpContentHeaders__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpContentHeaders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContentHeaders__Fields_DEFINED)
#include <Modloader/app/structs/HttpHeaders__Fields.h>
#if defined(IL2CPP_STRUCT_HttpHeaders__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpContentHeaders__Fields_DEFINED
struct HttpContent;
struct HttpContentHeaders__Fields {
    struct HttpHeaders__Fields _;
    struct HttpContent* content;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpContentHeaders__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpContentHeaders__Fields_FWDDECL
#include <Modloader/app/structs/HttpContent.h>
#endif
#undef IL2CPP_STRUCT_HttpContentHeaders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContentHeaders__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpContentHeaders__Fields_FWDDECL)
#include <Modloader/app/structs/HttpContentHeaders__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpContentHeaders__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
