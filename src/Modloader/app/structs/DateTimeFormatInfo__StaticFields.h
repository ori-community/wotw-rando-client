#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_DEFINED
struct DateTimeFormatInfo;
struct Hashtable;
struct DateTimeFormatInfo__StaticFields {
    struct DateTimeFormatInfo* invariantInfo;
    bool preferExistingTokens;
    struct Hashtable* s_calendarNativeNames;
    struct DateTimeFormatInfo* s_jajpDTFI;
    struct DateTimeFormatInfo* s_zhtwDTFI;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_FWDDECL
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeFormatInfo__StaticFields_FWDDECL)
#include <Modloader/app/structs/DateTimeFormatInfo__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeFormatInfo__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
