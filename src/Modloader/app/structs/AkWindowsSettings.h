#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWindowsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWindowsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWindowsSettings_DEFINED)
#include <Modloader/app/structs/AkWindowsSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkWindowsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkWindowsSettings_DEFINED
struct AkWindowsSettings__Class;
struct AkWindowsSettings {
    struct AkWindowsSettings__Class* klass;
    MonitorData* monitor;
    struct AkWindowsSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkWindowsSettings_FWDDECL)
#define IL2CPP_STRUCT_AkWindowsSettings_FWDDECL
#include <Modloader/app/structs/AkWindowsSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkWindowsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWindowsSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkWindowsSettings_FWDDECL)
#include <Modloader/app/structs/AkWindowsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWindowsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
