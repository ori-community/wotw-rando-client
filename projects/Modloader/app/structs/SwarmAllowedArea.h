#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAllowedArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAllowedArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAllowedArea_DEFINED)
#include <Modloader/app/structs/SwarmAllowedArea__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmAllowedArea__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmAllowedArea_DEFINED
struct SwarmAllowedArea__Class;
struct SwarmAllowedArea {
    struct SwarmAllowedArea__Class* klass;
    MonitorData* monitor;
    struct SwarmAllowedArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAllowedArea_FWDDECL)
#define IL2CPP_STRUCT_SwarmAllowedArea_FWDDECL
#include <Modloader/app/structs/SwarmAllowedArea__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmAllowedArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAllowedArea_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAllowedArea_FWDDECL)
#include <Modloader/app/structs/SwarmAllowedArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAllowedArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
