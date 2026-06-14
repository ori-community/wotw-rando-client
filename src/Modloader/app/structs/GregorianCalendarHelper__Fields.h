#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GregorianCalendarHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GregorianCalendarHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GregorianCalendarHelper__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GregorianCalendarHelper__Fields_DEFINED
struct Calendar;
struct EraInfo__Array;
struct Int32__Array;
struct __declspec(align(8)) GregorianCalendarHelper__Fields {
    int32_t m_maxYear;
    int32_t m_minYear;
    struct Calendar* m_Cal;
    struct EraInfo__Array* m_EraInfo;
    struct Int32__Array* m_eras;
    struct DateTime m_minDate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GregorianCalendarHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_GregorianCalendarHelper__Fields_FWDDECL
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/EraInfo__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_GregorianCalendarHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GregorianCalendarHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GregorianCalendarHelper__Fields_FWDDECL)
#include <Modloader/app/structs/GregorianCalendarHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GregorianCalendarHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
