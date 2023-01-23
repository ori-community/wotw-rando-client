#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleStartedTaskEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleStartedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleStartedTaskEventData_DEFINED)
#include <Modloader/app/structs/TitleStartedTaskEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleStartedTaskEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleStartedTaskEventData_DEFINED
struct TitleStartedTaskEventData__Class;
struct TitleStartedTaskEventData {
    struct TitleStartedTaskEventData__Class* klass;
    MonitorData* monitor;
    struct TitleStartedTaskEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleStartedTaskEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleStartedTaskEventData_FWDDECL
#include <Modloader/app/structs/TitleStartedTaskEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleStartedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleStartedTaskEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleStartedTaskEventData_FWDDECL)
#include <Modloader/app/structs/TitleStartedTaskEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleStartedTaskEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
