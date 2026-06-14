#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientHello__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientHello__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientHello__Fields_DEFINED)
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#if defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientHello__Fields_DEFINED
struct Byte__Array;
struct Int16__Array;
struct TlsClientHello__Fields {
    struct HandshakeMessage__Fields _;
    struct Byte__Array* random;
    struct Byte__Array* sessionId;
    struct Int16__Array* cipherSuites;
    struct Byte__Array* compressionMethods;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientHello__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsClientHello__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Int16__Array.h>
#endif
#undef IL2CPP_STRUCT_TlsClientHello__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientHello__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientHello__Fields_FWDDECL)
#include <Modloader/app/structs/TlsClientHello__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientHello__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
