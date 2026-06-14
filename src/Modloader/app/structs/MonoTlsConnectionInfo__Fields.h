#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_DEFINED)
#include <Modloader/app/structs/CipherSuiteCode__Enum.h>
#include <Modloader/app/structs/TlsProtocols__Enum.h>
#if defined(IL2CPP_STRUCT_CipherSuiteCode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TlsProtocols__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) MonoTlsConnectionInfo__Fields {
    CipherSuiteCode__Enum _CipherSuiteCode_k__BackingField;

    TlsProtocols__Enum _ProtocolVersion_k__BackingField;

    struct String* _PeerDomainName_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsConnectionInfo__Fields_FWDDECL)
#include <Modloader/app/structs/MonoTlsConnectionInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsConnectionInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
