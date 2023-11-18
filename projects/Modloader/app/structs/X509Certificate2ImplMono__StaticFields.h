#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_DEFINED)
#define IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_DEFINED
struct String;
struct Byte__Array;
struct X509Certificate2ImplMono__StaticFields {
    struct String* empty_error;
    struct Byte__Array* commonName;
    struct Byte__Array* email;
    struct Byte__Array* signedData;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate2ImplMono__StaticFields_FWDDECL)
#include <Modloader/app/structs/X509Certificate2ImplMono__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate2ImplMono__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
