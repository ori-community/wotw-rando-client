#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerSettings_DEFINED)
#include <Modloader/app/structs/TlsServerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_TlsServerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsServerSettings_DEFINED
struct TlsServerSettings__Class;
struct TlsServerSettings {
    struct TlsServerSettings__Class* klass;
    MonitorData* monitor;
    struct TlsServerSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerSettings_FWDDECL)
#define IL2CPP_STRUCT_TlsServerSettings_FWDDECL
#include <Modloader/app/structs/TlsServerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsServerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerSettings_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerSettings_FWDDECL)
#include <Modloader/app/structs/TlsServerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
