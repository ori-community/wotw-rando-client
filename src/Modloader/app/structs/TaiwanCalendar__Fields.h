#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaiwanCalendar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaiwanCalendar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaiwanCalendar__Fields_DEFINED)
#include <Modloader/app/structs/Calendar__Fields.h>
#if defined(IL2CPP_STRUCT_Calendar__Fields_DEFINED)
#define IL2CPP_STRUCT_TaiwanCalendar__Fields_DEFINED
struct GregorianCalendarHelper;
struct TaiwanCalendar__Fields {
    struct Calendar__Fields _;
    struct GregorianCalendarHelper* helper;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaiwanCalendar__Fields_FWDDECL)
#define IL2CPP_STRUCT_TaiwanCalendar__Fields_FWDDECL
#include <Modloader/app/structs/GregorianCalendarHelper.h>
#endif
#undef IL2CPP_STRUCT_TaiwanCalendar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaiwanCalendar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TaiwanCalendar__Fields_FWDDECL)
#include <Modloader/app/structs/TaiwanCalendar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaiwanCalendar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
