#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoidSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoidSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoidSettings_DEFINED)
#include <Modloader/app/structs/BoidSettings__Fields.h>
#if defined(IL2CPP_STRUCT_BoidSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_BoidSettings_DEFINED
struct BoidSettings__Class;
struct BoidSettings {
    struct BoidSettings__Class* klass;
    MonitorData* monitor;
    struct BoidSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoidSettings_FWDDECL)
#define IL2CPP_STRUCT_BoidSettings_FWDDECL
#include <Modloader/app/structs/BoidSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_BoidSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoidSettings_DEFINED) && !defined(IL2CPP_STRUCT_BoidSettings_FWDDECL)
#include <Modloader/app/structs/BoidSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoidSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
