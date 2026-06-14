#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmerSettings_DEFINED)
#include <Modloader/app/structs/UberSwarmerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_UberSwarmerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_UberSwarmerSettings_DEFINED
struct UberSwarmerSettings__Class;
struct UberSwarmerSettings {
    struct UberSwarmerSettings__Class* klass;
    MonitorData* monitor;
    struct UberSwarmerSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmerSettings_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmerSettings_FWDDECL
#include <Modloader/app/structs/UberSwarmerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_UberSwarmerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmerSettings_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmerSettings_FWDDECL)
#include <Modloader/app/structs/UberSwarmerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
