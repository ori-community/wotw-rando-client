#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GregorianCalendar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GregorianCalendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_GregorianCalendar_DEFINED)
#include <Modloader/app/structs/GregorianCalendar__Fields.h>
#if defined(IL2CPP_STRUCT_GregorianCalendar__Fields_DEFINED)
#define IL2CPP_STRUCT_GregorianCalendar_DEFINED
struct GregorianCalendar__Class;
struct GregorianCalendar {
    struct GregorianCalendar__Class* klass;
    MonitorData* monitor;
    struct GregorianCalendar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GregorianCalendar_FWDDECL)
#define IL2CPP_STRUCT_GregorianCalendar_FWDDECL
#include <Modloader/app/structs/GregorianCalendar__Class.h>
#endif
#undef IL2CPP_STRUCT_GregorianCalendar_INITIALIZING
#if !defined(IL2CPP_STRUCT_GregorianCalendar_DEFINED) && !defined(IL2CPP_STRUCT_GregorianCalendar_FWDDECL)
#include <Modloader/app/structs/GregorianCalendar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GregorianCalendar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
