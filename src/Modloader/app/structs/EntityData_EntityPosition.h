#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityData_EntityPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityData_EntityPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityData_EntityPosition_DEFINED)
#include <Modloader/app/structs/EntityData_EntityPosition__Fields.h>
#if defined(IL2CPP_STRUCT_EntityData_EntityPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityData_EntityPosition_DEFINED
struct EntityData_EntityPosition__Class;
struct EntityData_EntityPosition {
    struct EntityData_EntityPosition__Class* klass;
    MonitorData* monitor;
    struct EntityData_EntityPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityData_EntityPosition_FWDDECL)
#define IL2CPP_STRUCT_EntityData_EntityPosition_FWDDECL
#include <Modloader/app/structs/EntityData_EntityPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityData_EntityPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityData_EntityPosition_DEFINED) && !defined(IL2CPP_STRUCT_EntityData_EntityPosition_FWDDECL)
#include <Modloader/app/structs/EntityData_EntityPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityData_EntityPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
