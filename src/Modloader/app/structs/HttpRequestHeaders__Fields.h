#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestHeaders__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestHeaders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestHeaders__Fields_DEFINED)
#include <Modloader/app/structs/HttpHeaders__Fields.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_HttpHeaders__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_HttpRequestHeaders__Fields_DEFINED
struct HttpRequestHeaders__Fields {
    struct HttpHeaders__Fields _;
    struct Nullable_1_Boolean_ expectContinue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestHeaders__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestHeaders__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HttpRequestHeaders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestHeaders__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestHeaders__Fields_FWDDECL)
#include <Modloader/app/structs/HttpRequestHeaders__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestHeaders__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
