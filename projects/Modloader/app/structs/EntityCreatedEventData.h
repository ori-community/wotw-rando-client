#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityCreatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCreatedEventData_DEFINED)
#include <Modloader/app/structs/EntityCreatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityCreatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityCreatedEventData_DEFINED
struct EntityCreatedEventData__Class;
struct EntityCreatedEventData {
    struct EntityCreatedEventData__Class* klass;
    MonitorData* monitor;
    struct EntityCreatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityCreatedEventData_FWDDECL)
#define IL2CPP_STRUCT_EntityCreatedEventData_FWDDECL
#include <Modloader/app/structs/EntityCreatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCreatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_EntityCreatedEventData_FWDDECL)
#include <Modloader/app/structs/EntityCreatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityCreatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
