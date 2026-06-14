#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityLoggedInEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityLoggedInEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLoggedInEventData_DEFINED)
#include <Modloader/app/structs/EntityLoggedInEventData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLoggedInEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityLoggedInEventData_DEFINED
struct EntityLoggedInEventData__Class;
struct EntityLoggedInEventData {
    struct EntityLoggedInEventData__Class* klass;
    MonitorData* monitor;
    struct EntityLoggedInEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityLoggedInEventData_FWDDECL)
#define IL2CPP_STRUCT_EntityLoggedInEventData_FWDDECL
#include <Modloader/app/structs/EntityLoggedInEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityLoggedInEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLoggedInEventData_DEFINED) && !defined(IL2CPP_STRUCT_EntityLoggedInEventData_FWDDECL)
#include <Modloader/app/structs/EntityLoggedInEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityLoggedInEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
