#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaggerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaggerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerSettings_DEFINED)
#include <Modloader/app/structs/StaggerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_StaggerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_StaggerSettings_DEFINED
struct StaggerSettings__Class;
struct StaggerSettings {
    struct StaggerSettings__Class* klass;
    MonitorData* monitor;
    struct StaggerSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaggerSettings_FWDDECL)
#define IL2CPP_STRUCT_StaggerSettings_FWDDECL
#include <Modloader/app/structs/StaggerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_StaggerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerSettings_DEFINED) && !defined(IL2CPP_STRUCT_StaggerSettings_FWDDECL)
#include <Modloader/app/structs/StaggerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaggerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
