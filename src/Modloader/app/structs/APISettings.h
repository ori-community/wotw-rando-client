#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_APISettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_APISettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_APISettings_DEFINED)
#include <Modloader/app/structs/APISettings__Fields.h>
#if defined(IL2CPP_STRUCT_APISettings__Fields_DEFINED)
#define IL2CPP_STRUCT_APISettings_DEFINED
struct APISettings__Class;
struct APISettings {
    struct APISettings__Class* klass;
    MonitorData* monitor;
    struct APISettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_APISettings_FWDDECL)
#define IL2CPP_STRUCT_APISettings_FWDDECL
#include <Modloader/app/structs/APISettings__Class.h>
#endif
#undef IL2CPP_STRUCT_APISettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_APISettings_DEFINED) && !defined(IL2CPP_STRUCT_APISettings_FWDDECL)
#include <Modloader/app/structs/APISettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/APISettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
