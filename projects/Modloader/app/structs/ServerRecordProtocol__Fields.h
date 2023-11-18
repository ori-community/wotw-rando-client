#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerRecordProtocol__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerRecordProtocol__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRecordProtocol__Fields_DEFINED)
#include <Modloader/app/structs/RecordProtocol__Fields.h>
#if defined(IL2CPP_STRUCT_RecordProtocol__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerRecordProtocol__Fields_DEFINED
struct TlsClientCertificate;
struct ServerRecordProtocol__Fields {
    struct RecordProtocol__Fields _;
    struct TlsClientCertificate* cert;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerRecordProtocol__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerRecordProtocol__Fields_FWDDECL
#include <Modloader/app/structs/TlsClientCertificate.h>
#endif
#undef IL2CPP_STRUCT_ServerRecordProtocol__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRecordProtocol__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerRecordProtocol__Fields_FWDDECL)
#include <Modloader/app/structs/ServerRecordProtocol__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerRecordProtocol__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
