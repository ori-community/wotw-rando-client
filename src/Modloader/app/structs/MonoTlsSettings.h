#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsSettings_DEFINED)
#include <Modloader/app/structs/MonoTlsSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MonoTlsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoTlsSettings_DEFINED
struct MonoTlsSettings__Class;
struct MonoTlsSettings {
    struct MonoTlsSettings__Class* klass;
    MonitorData* monitor;
    struct MonoTlsSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsSettings_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsSettings_FWDDECL
#include <Modloader/app/structs/MonoTlsSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsSettings_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsSettings_FWDDECL)
#include <Modloader/app/structs/MonoTlsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
