#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CalendarData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CalendarData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CalendarData_DEFINED)
#include <Modloader/app/structs/CalendarData__Fields.h>
#if defined(IL2CPP_STRUCT_CalendarData__Fields_DEFINED)
#define IL2CPP_STRUCT_CalendarData_DEFINED
struct CalendarData__Class;
struct CalendarData {
    struct CalendarData__Class* klass;
    MonitorData* monitor;
    struct CalendarData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CalendarData_FWDDECL)
#define IL2CPP_STRUCT_CalendarData_FWDDECL
#include <Modloader/app/structs/CalendarData__Class.h>
#endif
#undef IL2CPP_STRUCT_CalendarData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CalendarData_DEFINED) && !defined(IL2CPP_STRUCT_CalendarData_FWDDECL)
#include <Modloader/app/structs/CalendarData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CalendarData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
