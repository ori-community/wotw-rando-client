#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityCinematicTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityCinematicTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicTask_DEFINED)
#include <Modloader/app/structs/EntityCinematicTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityCinematicTask__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityCinematicTask_DEFINED
struct EntityCinematicTask__Class;
struct EntityCinematicTask {
    struct EntityCinematicTask__Class* klass;
    MonitorData* monitor;
    struct EntityCinematicTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityCinematicTask_FWDDECL)
#define IL2CPP_STRUCT_EntityCinematicTask_FWDDECL
#include <Modloader/app/structs/EntityCinematicTask__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityCinematicTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicTask_DEFINED) && !defined(IL2CPP_STRUCT_EntityCinematicTask_FWDDECL)
#include <Modloader/app/structs/EntityCinematicTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityCinematicTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
