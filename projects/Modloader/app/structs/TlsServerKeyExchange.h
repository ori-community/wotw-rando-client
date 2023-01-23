#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerKeyExchange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerKeyExchange_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerKeyExchange_DEFINED)
#include <Modloader/app/structs/TlsServerKeyExchange__Fields.h>
#if defined(IL2CPP_STRUCT_TlsServerKeyExchange__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsServerKeyExchange_DEFINED
struct TlsServerKeyExchange__Class;
struct TlsServerKeyExchange {
    struct TlsServerKeyExchange__Class* klass;
    MonitorData* monitor;
    struct TlsServerKeyExchange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerKeyExchange_FWDDECL)
#define IL2CPP_STRUCT_TlsServerKeyExchange_FWDDECL
#include <Modloader/app/structs/TlsServerKeyExchange__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsServerKeyExchange_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerKeyExchange_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerKeyExchange_FWDDECL)
#include <Modloader/app/structs/TlsServerKeyExchange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerKeyExchange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
