#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatatypeImplementation__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatatypeImplementation__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DatatypeImplementation__StaticFields_DEFINED
struct Hashtable;
struct XmlSchemaSimpleType__Array;
struct XmlSchemaSimpleType;
struct XmlQualifiedName;
struct FacetsChecker;
struct DatatypeImplementation;
struct DatatypeImplementation__Array;
struct DatatypeImplementation_SchemaDatatypeMap__Array;
struct DatatypeImplementation__StaticFields {
    struct Hashtable* builtinTypes;
    struct XmlSchemaSimpleType__Array* enumToTypeCode;
    struct XmlSchemaSimpleType* anySimpleType;
    struct XmlSchemaSimpleType* anyAtomicType;
    struct XmlSchemaSimpleType* untypedAtomicType;
    struct XmlSchemaSimpleType* yearMonthDurationType;
    struct XmlSchemaSimpleType* dayTimeDurationType;
    struct XmlSchemaSimpleType* normalizedStringTypeV1Compat;
    struct XmlSchemaSimpleType* tokenTypeV1Compat;
    struct XmlQualifiedName* QnAnySimpleType;
    struct XmlQualifiedName* QnAnyType;
    struct FacetsChecker* stringFacetsChecker;
    struct FacetsChecker* miscFacetsChecker;
    struct FacetsChecker* numeric2FacetsChecker;
    struct FacetsChecker* binaryFacetsChecker;
    struct FacetsChecker* dateTimeFacetsChecker;
    struct FacetsChecker* durationFacetsChecker;
    struct FacetsChecker* listFacetsChecker;
    struct FacetsChecker* qnameFacetsChecker;
    struct FacetsChecker* unionFacetsChecker;
    struct DatatypeImplementation* c_anySimpleType;
    struct DatatypeImplementation* c_anyURI;
    struct DatatypeImplementation* c_base64Binary;
    struct DatatypeImplementation* c_boolean;
    struct DatatypeImplementation* c_byte;
    struct DatatypeImplementation* c_char;
    struct DatatypeImplementation* c_date;
    struct DatatypeImplementation* c_dateTime;
    struct DatatypeImplementation* c_dateTimeNoTz;
    struct DatatypeImplementation* c_dateTimeTz;
    struct DatatypeImplementation* c_day;
    struct DatatypeImplementation* c_decimal;
    struct DatatypeImplementation* c_double;
    struct DatatypeImplementation* c_doubleXdr;
    struct DatatypeImplementation* c_duration;
    struct DatatypeImplementation* c_ENTITY;
    struct DatatypeImplementation* c_ENTITIES;
    struct DatatypeImplementation* c_ENUMERATION;
    struct DatatypeImplementation* c_fixed;
    struct DatatypeImplementation* c_float;
    struct DatatypeImplementation* c_floatXdr;
    struct DatatypeImplementation* c_hexBinary;
    struct DatatypeImplementation* c_ID;
    struct DatatypeImplementation* c_IDREF;
    struct DatatypeImplementation* c_IDREFS;
    struct DatatypeImplementation* c_int;
    struct DatatypeImplementation* c_integer;
    struct DatatypeImplementation* c_language;
    struct DatatypeImplementation* c_long;
    struct DatatypeImplementation* c_month;
    struct DatatypeImplementation* c_monthDay;
    struct DatatypeImplementation* c_Name;
    struct DatatypeImplementation* c_NCName;
    struct DatatypeImplementation* c_negativeInteger;
    struct DatatypeImplementation* c_NMTOKEN;
    struct DatatypeImplementation* c_NMTOKENS;
    struct DatatypeImplementation* c_nonNegativeInteger;
    struct DatatypeImplementation* c_nonPositiveInteger;
    struct DatatypeImplementation* c_normalizedString;
    struct DatatypeImplementation* c_NOTATION;
    struct DatatypeImplementation* c_positiveInteger;
    struct DatatypeImplementation* c_QName;
    struct DatatypeImplementation* c_QNameXdr;
    struct DatatypeImplementation* c_short;
    struct DatatypeImplementation* c_string;
    struct DatatypeImplementation* c_time;
    struct DatatypeImplementation* c_timeNoTz;
    struct DatatypeImplementation* c_timeTz;
    struct DatatypeImplementation* c_token;
    struct DatatypeImplementation* c_unsignedByte;
    struct DatatypeImplementation* c_unsignedInt;
    struct DatatypeImplementation* c_unsignedLong;
    struct DatatypeImplementation* c_unsignedShort;
    struct DatatypeImplementation* c_uuid;
    struct DatatypeImplementation* c_year;
    struct DatatypeImplementation* c_yearMonth;
    struct DatatypeImplementation* c_normalizedStringV1Compat;
    struct DatatypeImplementation* c_tokenV1Compat;
    struct DatatypeImplementation* c_anyAtomicType;
    struct DatatypeImplementation* c_dayTimeDuration;
    struct DatatypeImplementation* c_untypedAtomicType;
    struct DatatypeImplementation* c_yearMonthDuration;
    struct DatatypeImplementation__Array* c_tokenizedTypes;
    struct DatatypeImplementation__Array* c_tokenizedTypesXsd;
    struct DatatypeImplementation_SchemaDatatypeMap__Array* c_XdrTypes;
    struct DatatypeImplementation_SchemaDatatypeMap__Array* c_XsdTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DatatypeImplementation__StaticFields_FWDDECL
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Array.h>
#include <Modloader/app/structs/DatatypeImplementation__Array.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaSimpleType.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#endif
#undef IL2CPP_STRUCT_DatatypeImplementation__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DatatypeImplementation__StaticFields_FWDDECL)
#include <Modloader/app/structs/DatatypeImplementation__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatatypeImplementation__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
