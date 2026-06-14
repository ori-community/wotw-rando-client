#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaggerDamageTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaggerDamageTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerDamageTracker_DEFINED)
#include <Modloader/app/structs/StaggerDamageTracker__Fields.h>
#if defined(IL2CPP_STRUCT_StaggerDamageTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_StaggerDamageTracker_DEFINED
struct StaggerDamageTracker__Class;
struct StaggerDamageTracker {
    struct StaggerDamageTracker__Class* klass;
    MonitorData* monitor;
    struct StaggerDamageTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaggerDamageTracker_FWDDECL)
#define IL2CPP_STRUCT_StaggerDamageTracker_FWDDECL
#include <Modloader/app/structs/StaggerDamageTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_StaggerDamageTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerDamageTracker_DEFINED) && !defined(IL2CPP_STRUCT_StaggerDamageTracker_FWDDECL)
#include <Modloader/app/structs/StaggerDamageTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaggerDamageTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
