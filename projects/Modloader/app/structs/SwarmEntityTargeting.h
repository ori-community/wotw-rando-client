#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmEntityTargeting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmEntityTargeting_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntityTargeting_DEFINED)
#include <Modloader/app/structs/SwarmEntityTargeting__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmEntityTargeting__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmEntityTargeting_DEFINED
struct SwarmEntityTargeting__Class;
struct SwarmEntityTargeting {
    struct SwarmEntityTargeting__Class* klass;
    MonitorData* monitor;
    struct SwarmEntityTargeting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmEntityTargeting_FWDDECL)
#define IL2CPP_STRUCT_SwarmEntityTargeting_FWDDECL
#include <Modloader/app/structs/SwarmEntityTargeting__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmEntityTargeting_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntityTargeting_DEFINED) && !defined(IL2CPP_STRUCT_SwarmEntityTargeting_FWDDECL)
#include <Modloader/app/structs/SwarmEntityTargeting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmEntityTargeting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
