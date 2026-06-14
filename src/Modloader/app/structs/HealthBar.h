#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthBar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBar_DEFINED)
#include <Modloader/app/structs/HealthBar__Fields.h>
#if defined(IL2CPP_STRUCT_HealthBar__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthBar_DEFINED
struct HealthBar__Class;
struct HealthBar {
    struct HealthBar__Class* klass;
    MonitorData* monitor;
    struct HealthBar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthBar_FWDDECL)
#define IL2CPP_STRUCT_HealthBar_FWDDECL
#include <Modloader/app/structs/HealthBar__Class.h>
#endif
#undef IL2CPP_STRUCT_HealthBar_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBar_DEFINED) && !defined(IL2CPP_STRUCT_HealthBar_FWDDECL)
#include <Modloader/app/structs/HealthBar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthBar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
