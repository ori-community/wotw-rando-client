#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaiwanCalendar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaiwanCalendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaiwanCalendar_DEFINED)
#include <Modloader/app/structs/TaiwanCalendar__Fields.h>
#if defined(IL2CPP_STRUCT_TaiwanCalendar__Fields_DEFINED)
#define IL2CPP_STRUCT_TaiwanCalendar_DEFINED
struct TaiwanCalendar__Class;
struct TaiwanCalendar {
    struct TaiwanCalendar__Class* klass;
    MonitorData* monitor;
    struct TaiwanCalendar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaiwanCalendar_FWDDECL)
#define IL2CPP_STRUCT_TaiwanCalendar_FWDDECL
#include <Modloader/app/structs/TaiwanCalendar__Class.h>
#endif
#undef IL2CPP_STRUCT_TaiwanCalendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaiwanCalendar_DEFINED) && !defined(IL2CPP_STRUCT_TaiwanCalendar_FWDDECL)
#include <Modloader/app/structs/TaiwanCalendar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaiwanCalendar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
