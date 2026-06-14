#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslHandshakeHash__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslHandshakeHash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslHandshakeHash__Fields_DEFINED)
#include <Modloader/app/structs/HashAlgorithm__Fields.h>
#if defined(IL2CPP_STRUCT_HashAlgorithm__Fields_DEFINED)
#define IL2CPP_STRUCT_SslHandshakeHash__Fields_DEFINED
struct HashAlgorithm;
struct Byte__Array;
struct SslHandshakeHash__Fields {
    struct HashAlgorithm__Fields _;
    struct HashAlgorithm* md5;
    struct HashAlgorithm* sha;
    bool hashing;
    struct Byte__Array* secret;
    struct Byte__Array* innerPadMD5;
    struct Byte__Array* outerPadMD5;
    struct Byte__Array* innerPadSHA;
    struct Byte__Array* outerPadSHA;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslHandshakeHash__Fields_FWDDECL)
#define IL2CPP_STRUCT_SslHandshakeHash__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#endif
#undef IL2CPP_STRUCT_SslHandshakeHash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslHandshakeHash__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SslHandshakeHash__Fields_FWDDECL)
#include <Modloader/app/structs/SslHandshakeHash__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslHandshakeHash__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
