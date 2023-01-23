#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CultureInfo__Fields_DEFINED
struct NumberFormatInfo;
struct DateTimeFormatInfo;
struct TextInfo;
struct String;
struct String__Array;
struct CompareInfo;
struct Void;
struct Calendar;
struct CultureInfo;
struct Byte__Array;
struct CultureData;
struct __declspec(align(8)) CultureInfo__Fields {
    bool m_isReadOnly;
    int32_t cultureID;
    int32_t parent_lcid;
    int32_t datetime_index;
    int32_t number_index;
    int32_t default_calendar_type;
    bool m_useUserOverride;
    struct NumberFormatInfo* numInfo;
    struct DateTimeFormatInfo* dateTimeInfo;
    struct TextInfo* textInfo;
    struct String* m_name;
    struct String* englishname;
    struct String* nativename;
    struct String* iso3lang;
    struct String* iso2lang;
    struct String* win3lang;
    struct String* territory;
    struct String__Array* native_calendar_names;
    struct CompareInfo* compareInfo;
    struct Void* textinfo_data;
    int32_t m_dataItem;
    struct Calendar* calendar;
    struct CultureInfo* parent_culture;
    bool constructed;
    struct Byte__Array* cached_serialized_form;
    struct CultureData* m_cultureData;
    bool m_isInherited;
};
#endif
#if !defined(IL2CPP_STRUCT_CultureInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_CultureInfo__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TextInfo.h>
#include <Modloader/app/structs/Void.h>
#endif
#undef IL2CPP_STRUCT_CultureInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CultureInfo__Fields_FWDDECL)
#include <Modloader/app/structs/CultureInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
