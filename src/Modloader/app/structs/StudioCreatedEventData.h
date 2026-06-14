#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StudioCreatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StudioCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioCreatedEventData_DEFINED)
#include <Modloader/app/structs/StudioCreatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_StudioCreatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_StudioCreatedEventData_DEFINED
struct StudioCreatedEventData__Class;
struct StudioCreatedEventData {
    struct StudioCreatedEventData__Class* klass;
    MonitorData* monitor;
    struct StudioCreatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StudioCreatedEventData_FWDDECL)
#define IL2CPP_STRUCT_StudioCreatedEventData_FWDDECL
#include <Modloader/app/structs/StudioCreatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_StudioCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioCreatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_StudioCreatedEventData_FWDDECL)
#include <Modloader/app/structs/StudioCreatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StudioCreatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
