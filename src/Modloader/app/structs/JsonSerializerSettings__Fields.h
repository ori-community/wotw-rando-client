#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ConstructorHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateFormatHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateParseHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DefaultValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_FloatFormatHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_FloatParseHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Formatting_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_MissingMemberHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ObjectCreationHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_StringEscapeHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_TypeNameHandling_.h>
#include <Modloader/app/structs/Nullable_1_System_Runtime_Serialization_StreamingContext_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_Formatting__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DateFormatHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DateTimeZoneHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DateParseHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_FloatFormatHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_FloatParseHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_StringEscapeHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_DefaultValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_PreserveReferencesHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_NullValueHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ObjectCreationHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_MissingMemberHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ReferenceLoopHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_System_Runtime_Serialization_StreamingContext__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_ConstructorHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_TypeNameHandling__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Newtonsoft_Json_MetadataPropertyHandling__DEFINED)
#define IL2CPP_STRUCT_JsonSerializerSettings__Fields_DEFINED
struct CultureInfo;
struct String;
struct IList_1_Newtonsoft_Json_JsonConverter_;
struct IContractResolver;
struct IEqualityComparer;
struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_;
struct ITraceWriter;
struct ISerializationBinder;
struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_;
struct __declspec(align(8)) JsonSerializerSettings__Fields {
    struct Nullable_1_Newtonsoft_Json_Formatting_ _formatting;
    struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ _dateFormatHandling;
    struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ _dateTimeZoneHandling;
    struct Nullable_1_Newtonsoft_Json_DateParseHandling_ _dateParseHandling;
    struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ _floatFormatHandling;
    struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ _floatParseHandling;
    struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ _stringEscapeHandling;
    struct CultureInfo* _culture;
    struct Nullable_1_Boolean_ _checkAdditionalContent;
    struct Nullable_1_Int32_ _maxDepth;
    bool _maxDepthSet;
    struct String* _dateFormatString;
    bool _dateFormatStringSet;
    struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ _typeNameAssemblyFormatHandling;
    struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _defaultValueHandling;
    struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ _preserveReferencesHandling;
    struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _nullValueHandling;
    struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _objectCreationHandling;
    struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ _missingMemberHandling;
    struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _referenceLoopHandling;
    struct Nullable_1_System_Runtime_Serialization_StreamingContext_ _context;
    struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ _constructorHandling;
    struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _typeNameHandling;
    struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ _metadataPropertyHandling;
    struct IList_1_Newtonsoft_Json_JsonConverter_* _Converters_k__BackingField;
    struct IContractResolver* _ContractResolver_k__BackingField;
    struct IEqualityComparer* _EqualityComparer_k__BackingField;
    struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_* _ReferenceResolverProvider_k__BackingField;
    struct ITraceWriter* _TraceWriter_k__BackingField;
    struct ISerializationBinder* _SerializationBinder_k__BackingField;
    struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_* _Error_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerSettings__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_.h>
#include <Modloader/app/structs/Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_.h>
#include <Modloader/app/structs/IContractResolver.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_JsonConverter_.h>
#include <Modloader/app/structs/ISerializationBinder.h>
#include <Modloader/app/structs/ITraceWriter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/JsonSerializerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
