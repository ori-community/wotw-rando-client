#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmNestEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmNestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmNestEntity_DEFINED)
#include <Modloader/app/structs/SwarmNestEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmNestEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmNestEntity_DEFINED
struct SwarmNestEntity__Class;
struct SwarmNestEntity {
    struct SwarmNestEntity__Class* klass;
    MonitorData* monitor;
    struct SwarmNestEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmNestEntity_FWDDECL)
#define IL2CPP_STRUCT_SwarmNestEntity_FWDDECL
#include <Modloader/app/structs/SwarmNestEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmNestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmNestEntity_DEFINED) && !defined(IL2CPP_STRUCT_SwarmNestEntity_FWDDECL)
#include <Modloader/app/structs/SwarmNestEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmNestEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
