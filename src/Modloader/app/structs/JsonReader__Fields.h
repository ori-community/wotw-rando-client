#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReader__Fields_DEFINED)
#include <Modloader/app/structs/DateParseHandling__Enum.h>
#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/FloatParseHandling__Enum.h>
#include <Modloader/app/structs/JsonPosition.h>
#include <Modloader/app/structs/JsonReader_State__Enum.h>
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#if defined(IL2CPP_STRUCT_JsonToken__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_JsonReader_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_JsonPosition_DEFINED) && defined(IL2CPP_STRUCT_DateTimeZoneHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_DateParseHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_FloatParseHandling__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonReader__Fields_DEFINED
struct Object;
struct CultureInfo;
struct String;
struct List_1_Newtonsoft_Json_JsonPosition_;
struct __declspec(align(8)) JsonReader__Fields {
    JsonToken__Enum_1 _tokenType;

    struct Object* _value;
    uint16_t _quoteChar;
    JsonReader_State__Enum _currentState;

    struct JsonPosition _currentPosition;
    struct CultureInfo* _culture;
    DateTimeZoneHandling__Enum _dateTimeZoneHandling;

    struct Nullable_1_Int32_ _maxDepth;
    bool _hasExceededMaxDepth;
    DateParseHandling__Enum _dateParseHandling;

    FloatParseHandling__Enum _floatParseHandling;

    struct String* _dateFormatString;
    struct List_1_Newtonsoft_Json_JsonPosition_* _stack;
    bool _CloseInput_k__BackingField;
    bool _SupportMultipleContent_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonReader__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonReader__Fields_FWDDECL)
#include <Modloader/app/structs/JsonReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
