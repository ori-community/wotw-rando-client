#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElement__Fields_DEFINED)
#include <Modloader/app/structs/X509ChainStatusFlags__Enum.h>
#if defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X509ChainElement__Fields_DEFINED
struct X509Certificate2;
struct X509ChainStatus__Array;
struct String;
struct __declspec(align(8)) X509ChainElement__Fields {
    struct X509Certificate2* certificate;
    struct X509ChainStatus__Array* status;
    struct String* info;
    X509ChainStatusFlags__Enum compressed_status_flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509ChainElement__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509ChainStatus__Array.h>
#endif
#undef IL2CPP_STRUCT_X509ChainElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainElement__Fields_FWDDECL)
#include <Modloader/app/structs/X509ChainElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
