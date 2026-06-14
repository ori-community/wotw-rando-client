#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandshakeMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandshakeMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED)
#include <Modloader/app/structs/ContentType__Enum.h>
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/TlsStream__Fields.h>
#if defined(IL2CPP_STRUCT_TlsStream__Fields_DEFINED) && defined(IL2CPP_STRUCT_HandshakeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED
struct Context_1;
struct Byte__Array;
struct HandshakeMessage__Fields {
    struct TlsStream__Fields _;
    struct Context_1* context;
    HandshakeType__Enum handshakeType;

    ContentType__Enum contentType;

    struct Byte__Array* cache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandshakeMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_HandshakeMessage__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>
#endif
#undef IL2CPP_STRUCT_HandshakeMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandshakeMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HandshakeMessage__Fields_FWDDECL)
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandshakeMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
