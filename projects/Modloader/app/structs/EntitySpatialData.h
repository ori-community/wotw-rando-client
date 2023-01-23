#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntitySpatialData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntitySpatialData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpatialData_DEFINED)
#define IL2CPP_STRUCT_EntitySpatialData_DEFINED
struct EntitySpatialData__Class;
struct EntitySpatialData {
    struct EntitySpatialData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EntitySpatialData_FWDDECL)
#define IL2CPP_STRUCT_EntitySpatialData_FWDDECL
#include <Modloader/app/structs/EntitySpatialData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntitySpatialData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpatialData_DEFINED) && !defined(IL2CPP_STRUCT_EntitySpatialData_FWDDECL)
#include <Modloader/app/structs/EntitySpatialData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntitySpatialData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
