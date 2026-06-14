#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlatformingMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlatformingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlatformingMovement_DEFINED)
#include <Modloader/app/structs/EntityPlatformingMovement__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlatformingMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPlatformingMovement_DEFINED
struct EntityPlatformingMovement__Class;
struct EntityPlatformingMovement {
    struct EntityPlatformingMovement__Class* klass;
    MonitorData* monitor;
    struct EntityPlatformingMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPlatformingMovement_FWDDECL)
#define IL2CPP_STRUCT_EntityPlatformingMovement_FWDDECL
#include <Modloader/app/structs/EntityPlatformingMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPlatformingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlatformingMovement_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlatformingMovement_FWDDECL)
#include <Modloader/app/structs/EntityPlatformingMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlatformingMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
