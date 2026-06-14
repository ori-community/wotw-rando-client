#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VignettingSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VignettingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_VignettingSettings_DEFINED)
#include <Modloader/app/structs/VignettingSettings__Fields.h>
#if defined(IL2CPP_STRUCT_VignettingSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_VignettingSettings_DEFINED
struct VignettingSettings__Class;
struct VignettingSettings {
    struct VignettingSettings__Class* klass;
    MonitorData* monitor;
    struct VignettingSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VignettingSettings_FWDDECL)
#define IL2CPP_STRUCT_VignettingSettings_FWDDECL
#include <Modloader/app/structs/VignettingSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_VignettingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_VignettingSettings_DEFINED) && !defined(IL2CPP_STRUCT_VignettingSettings_FWDDECL)
#include <Modloader/app/structs/VignettingSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VignettingSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
