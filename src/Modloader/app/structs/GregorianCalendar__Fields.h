#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GregorianCalendar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GregorianCalendar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GregorianCalendar__Fields_DEFINED)
#include <Modloader/app/structs/Calendar__Fields.h>
#include <Modloader/app/structs/GregorianCalendarTypes__Enum.h>
#if defined(IL2CPP_STRUCT_Calendar__Fields_DEFINED) && defined(IL2CPP_STRUCT_GregorianCalendarTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_GregorianCalendar__Fields_DEFINED
struct GregorianCalendar__Fields {
    struct Calendar__Fields _;
    GregorianCalendarTypes__Enum m_type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GregorianCalendar__Fields_FWDDECL)
#define IL2CPP_STRUCT_GregorianCalendar__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GregorianCalendar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GregorianCalendar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GregorianCalendar__Fields_FWDDECL)
#include <Modloader/app/structs/GregorianCalendar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GregorianCalendar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
