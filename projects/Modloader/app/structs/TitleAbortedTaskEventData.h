#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleAbortedTaskEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleAbortedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAbortedTaskEventData_DEFINED)
#include <Modloader/app/structs/TitleAbortedTaskEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleAbortedTaskEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleAbortedTaskEventData_DEFINED
struct TitleAbortedTaskEventData__Class;
struct TitleAbortedTaskEventData {
    struct TitleAbortedTaskEventData__Class* klass;
    MonitorData* monitor;
    struct TitleAbortedTaskEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleAbortedTaskEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleAbortedTaskEventData_FWDDECL
#include <Modloader/app/structs/TitleAbortedTaskEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleAbortedTaskEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAbortedTaskEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleAbortedTaskEventData_FWDDECL)
#include <Modloader/app/structs/TitleAbortedTaskEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleAbortedTaskEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
