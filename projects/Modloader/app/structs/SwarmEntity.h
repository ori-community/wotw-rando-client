#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntity_DEFINED)
#include <Modloader/app/structs/SwarmEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmEntity_DEFINED
struct SwarmEntity__Class;
struct SwarmEntity {
    struct SwarmEntity__Class* klass;
    MonitorData* monitor;
    struct SwarmEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmEntity_FWDDECL)
#define IL2CPP_STRUCT_SwarmEntity_FWDDECL
#include <Modloader/app/structs/SwarmEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntity_DEFINED) && !defined(IL2CPP_STRUCT_SwarmEntity_FWDDECL)
#include <Modloader/app/structs/SwarmEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
