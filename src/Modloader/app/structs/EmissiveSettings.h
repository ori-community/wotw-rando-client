#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmissiveSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmissiveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveSettings_DEFINED)
#include <Modloader/app/structs/EmissiveSettings__Fields.h>
#if defined(IL2CPP_STRUCT_EmissiveSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_EmissiveSettings_DEFINED
struct EmissiveSettings__Class;
struct EmissiveSettings {
    struct EmissiveSettings__Class* klass;
    MonitorData* monitor;
    struct EmissiveSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmissiveSettings_FWDDECL)
#define IL2CPP_STRUCT_EmissiveSettings_FWDDECL
#include <Modloader/app/structs/EmissiveSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_EmissiveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveSettings_DEFINED) && !defined(IL2CPP_STRUCT_EmissiveSettings_FWDDECL)
#include <Modloader/app/structs/EmissiveSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmissiveSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
