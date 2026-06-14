#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_DEFINED)
#include <Modloader/app/structs/SHA1__Fields.h>
#if defined(IL2CPP_STRUCT_SHA1__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_DEFINED
struct SHA1Internal;
struct SHA1CryptoServiceProvider__Fields {
    struct SHA1__Fields _;
    struct SHA1Internal* sha;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_FWDDECL
#include <Modloader/app/structs/SHA1Internal.h>
#endif
#undef IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_FWDDECL)
#include <Modloader/app/structs/SHA1CryptoServiceProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA1CryptoServiceProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
