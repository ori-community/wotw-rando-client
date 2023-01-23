#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthBarSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthBarSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBarSpawner_DEFINED)
#include <Modloader/app/structs/HealthBarSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_HealthBarSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthBarSpawner_DEFINED
struct HealthBarSpawner__Class;
struct HealthBarSpawner {
    struct HealthBarSpawner__Class* klass;
    MonitorData* monitor;
    struct HealthBarSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthBarSpawner_FWDDECL)
#define IL2CPP_STRUCT_HealthBarSpawner_FWDDECL
#include <Modloader/app/structs/HealthBarSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_HealthBarSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBarSpawner_DEFINED) && !defined(IL2CPP_STRUCT_HealthBarSpawner_FWDDECL)
#include <Modloader/app/structs/HealthBarSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthBarSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
