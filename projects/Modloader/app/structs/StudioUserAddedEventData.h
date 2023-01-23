#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StudioUserAddedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StudioUserAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserAddedEventData_DEFINED)
#include <Modloader/app/structs/StudioUserAddedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_StudioUserAddedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_StudioUserAddedEventData_DEFINED
struct StudioUserAddedEventData__Class;
struct StudioUserAddedEventData {
    struct StudioUserAddedEventData__Class* klass;
    MonitorData* monitor;
    struct StudioUserAddedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StudioUserAddedEventData_FWDDECL)
#define IL2CPP_STRUCT_StudioUserAddedEventData_FWDDECL
#include <Modloader/app/structs/StudioUserAddedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_StudioUserAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserAddedEventData_DEFINED) && !defined(IL2CPP_STRUCT_StudioUserAddedEventData_FWDDECL)
#include <Modloader/app/structs/StudioUserAddedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StudioUserAddedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
