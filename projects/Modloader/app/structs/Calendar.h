#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Calendar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Calendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_Calendar_DEFINED)
#include <Modloader/app/structs/Calendar__Fields.h>
#if defined(IL2CPP_STRUCT_Calendar__Fields_DEFINED)
#define IL2CPP_STRUCT_Calendar_DEFINED
struct Calendar__Class;
struct Calendar {
    struct Calendar__Class* klass;
    MonitorData* monitor;
    struct Calendar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Calendar_FWDDECL)
#define IL2CPP_STRUCT_Calendar_FWDDECL
#include <Modloader/app/structs/Calendar__Class.h>
#endif
#undef IL2CPP_STRUCT_Calendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_Calendar_DEFINED) && !defined(IL2CPP_STRUCT_Calendar_FWDDECL)
#include <Modloader/app/structs/Calendar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Calendar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
