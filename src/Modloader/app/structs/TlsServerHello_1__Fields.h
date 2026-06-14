#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerHello_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerHello_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerHello_1__Fields_DEFINED)
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#include <Modloader/app/structs/SecurityCompressionType__Enum.h>
#if defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED) && defined(IL2CPP_STRUCT_SecurityCompressionType__Enum_DEFINED)
#define IL2CPP_STRUCT_TlsServerHello_1__Fields_DEFINED
struct Byte__Array;
struct CipherSuite;
struct TlsServerHello_1__Fields {
    struct HandshakeMessage__Fields _;
    SecurityCompressionType__Enum compressionMethod;

    struct Byte__Array* random;
    struct Byte__Array* sessionId;
    struct CipherSuite* cipherSuite;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerHello_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsServerHello_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherSuite.h>
#endif
#undef IL2CPP_STRUCT_TlsServerHello_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerHello_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerHello_1__Fields_FWDDECL)
#include <Modloader/app/structs/TlsServerHello_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerHello_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
