#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityObjectsSetEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityObjectsSetEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityObjectsSetEventData_DEFINED)
#include <Modloader/app/structs/EntityObjectsSetEventData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityObjectsSetEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityObjectsSetEventData_DEFINED
struct EntityObjectsSetEventData__Class;
struct EntityObjectsSetEventData {
    struct EntityObjectsSetEventData__Class* klass;
    MonitorData* monitor;
    struct EntityObjectsSetEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityObjectsSetEventData_FWDDECL)
#define IL2CPP_STRUCT_EntityObjectsSetEventData_FWDDECL
#include <Modloader/app/structs/EntityObjectsSetEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityObjectsSetEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityObjectsSetEventData_DEFINED) && !defined(IL2CPP_STRUCT_EntityObjectsSetEventData_FWDDECL)
#include <Modloader/app/structs/EntityObjectsSetEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityObjectsSetEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
