#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeFormatInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeFormatInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo_DEFINED)
#include <Modloader/app/structs/DateTimeFormatInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DateTimeFormatInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DateTimeFormatInfo_DEFINED
struct DateTimeFormatInfo__Class;
struct DateTimeFormatInfo {
    struct DateTimeFormatInfo__Class* klass;
    MonitorData* monitor;
    struct DateTimeFormatInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo_FWDDECL)
#define IL2CPP_STRUCT_DateTimeFormatInfo_FWDDECL
#include <Modloader/app/structs/DateTimeFormatInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeFormatInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeFormatInfo_FWDDECL)
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
