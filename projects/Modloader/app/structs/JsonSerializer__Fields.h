#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializer__Fields_DEFINED)
#include <Modloader/app/structs/ConstructorHandling__Enum.h>
#include <Modloader/app/structs/DefaultValueHandling__Enum.h>
#include <Modloader/app/structs/MetadataPropertyHandling__Enum.h>
#include <Modloader/app/structs/MissingMemberHandling__Enum.h>
#include <Modloader/app/structs/NullValueHandling__Enum.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateFormatHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateParseHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_FloatFormatHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_FloatParseHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Formatting_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_StringEscapeHandling_.h>
#include <Modloader/app/structs/ObjectCreationHandling__Enum.h>
#include <Modloader/app/structs/PreserveReferencesHandling__Enum.h>
#include <Modloader/app/structs/ReferenceLoopHandling__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/TypeNameAssemblyFormatHandling__Enum.h>
#include <Modloader/app/structs/TypeNameHandling__Enum.h>
#if defined(IL2CPP_STRUCT_TypeNameHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_TypeNameAssemblyFormatHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_PreserveReferencesHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_ReferenceLoopHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_MissingMemberHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_ObjectCreationHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_NullValueHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_DefaultValueHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConstructorHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_MetadataPropertyHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_StreamingContext_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Formatting__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DateFormatHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DateParseHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_FloatFormatHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_FloatParseHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_StringEscapeHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_JsonSerializer__Fields_DEFINED
struct JsonConverterCollection;
struct IContractResolver;
struct ITraceWriter;
struct IEqualityComparer;
struct ISerializationBinder;
struct IReferenceResolver;
struct CultureInfo;
struct String;
struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_;
struct __declspec(align(8)) JsonSerializer__Fields {
    TypeNameHandling__Enum _typeNameHandling;

    TypeNameAssemblyFormatHandling__Enum _typeNameAssemblyFormatHandling;

    PreserveReferencesHandling__Enum _preserveReferencesHandling;

    ReferenceLoopHandling__Enum _referenceLoopHandling;

    MissingMemberHandling__Enum _missingMemberHandling;

    ObjectCreationHandling__Enum _objectCreationHandling;

    NullValueHandling__Enum _nullValueHandling;

    DefaultValueHandling__Enum _defaultValueHandling;

    ConstructorHandling__Enum _constructorHandling;

    MetadataPropertyHandling__Enum _metadataPropertyHandling;

    struct JsonConverterCollection* _converters;
    struct IContractResolver* _contractResolver;
    struct ITraceWriter* _traceWriter;
    struct IEqualityComparer* _equalityComparer;
    struct ISerializationBinder* _serializationBinder;
    struct StreamingContext _context;
    struct IReferenceResolver* _referenceResolver;
    struct Nullable_1_Newtonsoft_Json_Formatting_ _formatting;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ _dateFormatHandling;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ _dateTimeZoneHandling;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling_ _dateParseHandling;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ _floatFormatHandling;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ _floatParseHandling;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ _stringEscapeHandling;
    struct CultureInfo* _culture;
    struct Nullable_1_Int32_ _maxDepth;
    bool _maxDepthSet;
    struct Nullable_1_Boolean_ _checkAdditionalContent;
    struct String* _dateFormatString;
    bool _dateFormatStringSet;
    struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_* Error;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializer__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializer__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_.h>
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IReferenceResolver.h>
#include <Modloader/app/structs/ISerializationBinder.h>
#include <Modloader/app/structs/ITraceWriter.h>
#include <Modloader/app/structs/JsonConverterCollection.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializer__Fields_FWDDECL)
#include <Modloader/app/structs/JsonSerializer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
