#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED)
#include <Modloader/app/structs/DateFormatHandling__Enum.h>
#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/FloatFormatHandling__Enum.h>
#include <Modloader/app/structs/Formatting__Enum_1.h>
#include <Modloader/app/structs/JsonPosition.h>
#include <Modloader/app/structs/JsonWriter_State__Enum.h>
#include <Modloader/app/structs/StringEscapeHandling__Enum.h>
#if defined(IL2CPP_STRUCT_JsonPosition_DEFINED) && defined(IL2CPP_STRUCT_JsonWriter_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Formatting__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_DateFormatHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTimeZoneHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_StringEscapeHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_FloatFormatHandling__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonWriter__Fields_DEFINED
struct List_1_Newtonsoft_Json_JsonPosition_;
struct String;
struct CultureInfo;
struct __declspec(align(8)) JsonWriter__Fields {
    struct List_1_Newtonsoft_Json_JsonPosition_* _stack;
    struct JsonPosition _currentPosition;
    JsonWriter_State__Enum _currentState;

    Formatting__Enum_1 _formatting;

    bool _CloseOutput_k__BackingField;
    bool _AutoCompleteOnClose_k__BackingField;
    DateFormatHandling__Enum _dateFormatHandling;

    DateTimeZoneHandling__Enum _dateTimeZoneHandling;

    StringEscapeHandling__Enum _stringEscapeHandling;

    FloatFormatHandling__Enum _floatFormatHandling;

    struct String* _dateFormatString;
    struct CultureInfo* _culture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonWriter__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonWriter__Fields_FWDDECL)
#include <Modloader/app/structs/JsonWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
