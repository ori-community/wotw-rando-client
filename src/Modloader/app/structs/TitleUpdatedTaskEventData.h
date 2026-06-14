#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleUpdatedTaskEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleUpdatedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData_DEFINED)
#include <Modloader/app/structs/TitleUpdatedTaskEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleUpdatedTaskEventData_DEFINED
struct TitleUpdatedTaskEventData__Class;
struct TitleUpdatedTaskEventData {
    struct TitleUpdatedTaskEventData__Class* klass;
    MonitorData* monitor;
    struct TitleUpdatedTaskEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleUpdatedTaskEventData_FWDDECL
#include <Modloader/app/structs/TitleUpdatedTaskEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleUpdatedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleUpdatedTaskEventData_FWDDECL)
#include <Modloader/app/structs/TitleUpdatedTaskEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleUpdatedTaskEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
