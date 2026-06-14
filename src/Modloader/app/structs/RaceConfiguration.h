#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceConfiguration_DEFINED)
#include <Modloader/app/structs/RaceConfiguration__Fields.h>
#if defined(IL2CPP_STRUCT_RaceConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceConfiguration_DEFINED
struct RaceConfiguration__Class;
struct RaceConfiguration {
    struct RaceConfiguration__Class* klass;
    MonitorData* monitor;
    struct RaceConfiguration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceConfiguration_FWDDECL)
#define IL2CPP_STRUCT_RaceConfiguration_FWDDECL
#include <Modloader/app/structs/RaceConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_RaceConfiguration_FWDDECL)
#include <Modloader/app/structs/RaceConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
