#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthDebugMenuItem_DEFINED)
#include <Modloader/app/structs/HealthDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_HealthDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthDebugMenuItem_DEFINED
struct HealthDebugMenuItem__Class;
struct HealthDebugMenuItem {
    struct HealthDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct HealthDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_HealthDebugMenuItem_FWDDECL
#include <Modloader/app/structs/HealthDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_HealthDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_HealthDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/HealthDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
