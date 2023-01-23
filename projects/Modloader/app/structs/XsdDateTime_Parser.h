#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDateTime_Parser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDateTime_Parser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTime_Parser_DEFINED)
#include <Modloader/app/structs/XsdDateTime_DateTimeTypeCode__Enum.h>
#include <Modloader/app/structs/XsdDateTime_XsdDateTimeKind__Enum.h>
#if defined(IL2CPP_STRUCT_XsdDateTime_DateTimeTypeCode__Enum_DEFINED) && defined(IL2CPP_STRUCT_XsdDateTime_XsdDateTimeKind__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdDateTime_Parser_DEFINED
struct String;
struct XsdDateTime_Parser {
    XsdDateTime_DateTimeTypeCode__Enum typeCode;

    int32_t year;
    int32_t month;
    int32_t day;
    int32_t hour;
    int32_t minute;
    int32_t second;
    int32_t fraction;
    XsdDateTime_XsdDateTimeKind__Enum kind;

    int32_t zoneHour;
    int32_t zoneMinute;
    struct String* text;
    int32_t length;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdDateTime_Parser_FWDDECL)
#define IL2CPP_STRUCT_XsdDateTime_Parser_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XsdDateTime_Parser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTime_Parser_DEFINED) && !defined(IL2CPP_STRUCT_XsdDateTime_Parser_FWDDECL)
#include <Modloader/app/structs/XsdDateTime_Parser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDateTime_Parser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
