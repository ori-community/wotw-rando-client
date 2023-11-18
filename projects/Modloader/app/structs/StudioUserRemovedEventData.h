#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StudioUserRemovedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StudioUserRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserRemovedEventData_DEFINED)
#include <Modloader/app/structs/StudioUserRemovedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_StudioUserRemovedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_StudioUserRemovedEventData_DEFINED
struct StudioUserRemovedEventData__Class;
struct StudioUserRemovedEventData {
    struct StudioUserRemovedEventData__Class* klass;
    MonitorData* monitor;
    struct StudioUserRemovedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StudioUserRemovedEventData_FWDDECL)
#define IL2CPP_STRUCT_StudioUserRemovedEventData_FWDDECL
#include <Modloader/app/structs/StudioUserRemovedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_StudioUserRemovedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StudioUserRemovedEventData_DEFINED) && !defined(IL2CPP_STRUCT_StudioUserRemovedEventData_FWDDECL)
#include <Modloader/app/structs/StudioUserRemovedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StudioUserRemovedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
