#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarmerSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarmerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmerSettings_DEFINED)
#include <Modloader/app/structs/BatSwarmerSettings__Fields.h>
#if defined(IL2CPP_STRUCT_BatSwarmerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_BatSwarmerSettings_DEFINED
struct BatSwarmerSettings__Class;
struct BatSwarmerSettings {
    struct BatSwarmerSettings__Class* klass;
    MonitorData* monitor;
    struct BatSwarmerSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarmerSettings_FWDDECL)
#define IL2CPP_STRUCT_BatSwarmerSettings_FWDDECL
#include <Modloader/app/structs/BatSwarmerSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_BatSwarmerSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmerSettings_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarmerSettings_FWDDECL)
#include <Modloader/app/structs/BatSwarmerSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarmerSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
