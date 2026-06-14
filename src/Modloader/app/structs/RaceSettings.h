#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSettings_DEFINED)
#include <Modloader/app/structs/RaceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_RaceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceSettings_DEFINED
struct RaceSettings__Class;
struct RaceSettings {
    struct RaceSettings__Class* klass;
    MonitorData* monitor;
    struct RaceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSettings_FWDDECL)
#define IL2CPP_STRUCT_RaceSettings_FWDDECL
#include <Modloader/app/structs/RaceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSettings_DEFINED) && !defined(IL2CPP_STRUCT_RaceSettings_FWDDECL)
#include <Modloader/app/structs/RaceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
