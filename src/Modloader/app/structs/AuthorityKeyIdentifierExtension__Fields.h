#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_DEFINED)
#include <Modloader/app/structs/X509Extension_2__Fields.h>
#if defined(IL2CPP_STRUCT_X509Extension_2__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_DEFINED
struct Byte__Array;
struct AuthorityKeyIdentifierExtension__Fields {
    struct X509Extension_2__Fields _;
    struct Byte__Array* aki;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AuthorityKeyIdentifierExtension__Fields_FWDDECL)
#include <Modloader/app/structs/AuthorityKeyIdentifierExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthorityKeyIdentifierExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
