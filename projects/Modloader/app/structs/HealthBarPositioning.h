#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthBarPositioning_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthBarPositioning_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBarPositioning_DEFINED)
#include <Modloader/app/structs/HealthBarPositioning__Fields.h>
#if defined(IL2CPP_STRUCT_HealthBarPositioning__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthBarPositioning_DEFINED
struct HealthBarPositioning__Class;
struct HealthBarPositioning {
    struct HealthBarPositioning__Class* klass;
    MonitorData* monitor;
    struct HealthBarPositioning__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthBarPositioning_FWDDECL)
#define IL2CPP_STRUCT_HealthBarPositioning_FWDDECL
#include <Modloader/app/structs/HealthBarPositioning__Class.h>
#endif
#undef IL2CPP_STRUCT_HealthBarPositioning_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBarPositioning_DEFINED) && !defined(IL2CPP_STRUCT_HealthBarPositioning_FWDDECL)
#include <Modloader/app/structs/HealthBarPositioning.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthBarPositioning.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
