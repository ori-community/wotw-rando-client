#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityCinematicData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityCinematicData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicData_DEFINED)
#include <Modloader/app/structs/EntityCinematicData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityCinematicData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityCinematicData_DEFINED
struct EntityCinematicData__Class;
struct EntityCinematicData {
    struct EntityCinematicData__Class* klass;
    MonitorData* monitor;
    struct EntityCinematicData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityCinematicData_FWDDECL)
#define IL2CPP_STRUCT_EntityCinematicData_FWDDECL
#include <Modloader/app/structs/EntityCinematicData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityCinematicData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicData_DEFINED) && !defined(IL2CPP_STRUCT_EntityCinematicData_FWDDECL)
#include <Modloader/app/structs/EntityCinematicData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityCinematicData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
