#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientKeyExchange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientKeyExchange_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientKeyExchange_DEFINED)
#include <Modloader/app/structs/TlsClientKeyExchange__Fields.h>
#if defined(IL2CPP_STRUCT_TlsClientKeyExchange__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientKeyExchange_DEFINED
struct TlsClientKeyExchange__Class;
struct TlsClientKeyExchange {
    struct TlsClientKeyExchange__Class* klass;
    MonitorData* monitor;
    struct TlsClientKeyExchange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientKeyExchange_FWDDECL)
#define IL2CPP_STRUCT_TlsClientKeyExchange_FWDDECL
#include <Modloader/app/structs/TlsClientKeyExchange__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsClientKeyExchange_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientKeyExchange_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientKeyExchange_FWDDECL)
#include <Modloader/app/structs/TlsClientKeyExchange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientKeyExchange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
