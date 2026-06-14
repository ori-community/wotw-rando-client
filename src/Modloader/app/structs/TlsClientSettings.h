#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientSettings_DEFINED)
#include <Modloader/app/structs/TlsClientSettings__Fields.h>
#if defined(IL2CPP_STRUCT_TlsClientSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientSettings_DEFINED
struct TlsClientSettings__Class;
struct TlsClientSettings {
    struct TlsClientSettings__Class* klass;
    MonitorData* monitor;
    struct TlsClientSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientSettings_FWDDECL)
#define IL2CPP_STRUCT_TlsClientSettings_FWDDECL
#include <Modloader/app/structs/TlsClientSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsClientSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientSettings_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientSettings_FWDDECL)
#include <Modloader/app/structs/TlsClientSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
