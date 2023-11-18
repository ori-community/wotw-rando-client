#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleCompletedTaskEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleCompletedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData_DEFINED)
#include <Modloader/app/structs/TitleCompletedTaskEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleCompletedTaskEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleCompletedTaskEventData_DEFINED
struct TitleCompletedTaskEventData__Class;
struct TitleCompletedTaskEventData {
    struct TitleCompletedTaskEventData__Class* klass;
    MonitorData* monitor;
    struct TitleCompletedTaskEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleCompletedTaskEventData_FWDDECL
#include <Modloader/app/structs/TitleCompletedTaskEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleCompletedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleCompletedTaskEventData_FWDDECL)
#include <Modloader/app/structs/TitleCompletedTaskEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleCompletedTaskEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
