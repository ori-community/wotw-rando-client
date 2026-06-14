#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerSettings_DEFINED)
#include <Modloader/app/structs/ScenesManagerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesManagerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerSettings_DEFINED
struct ScenesManagerSettings__Class;
struct ScenesManagerSettings {
    struct ScenesManagerSettings__Class* klass;
    MonitorData* monitor;
    struct ScenesManagerSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerSettings_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerSettings_FWDDECL
#include <Modloader/app/structs/ScenesManagerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerSettings_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerSettings_FWDDECL)
#include <Modloader/app/structs/ScenesManagerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
