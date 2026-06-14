#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleCreatedTaskEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleCreatedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCreatedTaskEventData_DEFINED)
#include <Modloader/app/structs/TitleCreatedTaskEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleCreatedTaskEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleCreatedTaskEventData_DEFINED
struct TitleCreatedTaskEventData__Class;
struct TitleCreatedTaskEventData {
    struct TitleCreatedTaskEventData__Class* klass;
    MonitorData* monitor;
    struct TitleCreatedTaskEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleCreatedTaskEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleCreatedTaskEventData_FWDDECL
#include <Modloader/app/structs/TitleCreatedTaskEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleCreatedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCreatedTaskEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleCreatedTaskEventData_FWDDECL)
#include <Modloader/app/structs/TitleCreatedTaskEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleCreatedTaskEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
