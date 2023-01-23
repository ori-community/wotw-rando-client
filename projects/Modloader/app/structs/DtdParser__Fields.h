#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DtdParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DtdParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser__Fields_DEFINED)
#include <Modloader/app/structs/DtdParser_ScanningFunction__Enum.h>
#include <Modloader/app/structs/LineInfo.h>
#include <Modloader/app/structs/XmlCharType.h>
#if defined(IL2CPP_STRUCT_XmlCharType_DEFINED) && defined(IL2CPP_STRUCT_DtdParser_ScanningFunction__Enum_DEFINED) && defined(IL2CPP_STRUCT_LineInfo_DEFINED)
#define IL2CPP_STRUCT_DtdParser__Fields_DEFINED
struct IDtdParserAdapter;
struct IDtdParserAdapterWithValidation;
struct XmlNameTable;
struct SchemaInfo;
struct String;
struct Char__Array;
struct StringBuilder;
struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_;
struct Int32__Array;
struct __declspec(align(8)) DtdParser__Fields {
    struct IDtdParserAdapter* readerAdapter;
    struct IDtdParserAdapterWithValidation* readerAdapterWithValidation;
    struct XmlNameTable* nameTable;
    struct SchemaInfo* schemaInfo;
    struct XmlCharType xmlCharType;
    struct String* systemId;
    struct String* publicId;
    bool normalize;
    bool validate;
    bool supportNamespaces;
    bool v1Compat;
    struct Char__Array* chars;
    int32_t charsUsed;
    int32_t curPos;
    DtdParser_ScanningFunction__Enum scanningFunction;

    DtdParser_ScanningFunction__Enum nextScaningFunction;

    DtdParser_ScanningFunction__Enum savedScanningFunction;

    bool whitespaceSeen;
    int32_t tokenStartPos;
    int32_t colonPos;
    struct StringBuilder* internalSubsetValueSb;
    int32_t externalEntitiesDepth;
    int32_t currentEntityId;
    bool freeFloatingDtd;
    bool hasFreeFloatingInternalSubset;
    struct StringBuilder* stringBuilder;
    int32_t condSectionDepth;
    struct LineInfo literalLineInfo;
    uint16_t literalQuoteChar;
    struct String* documentBaseUri;
    struct String* externalDtdBaseUri;
    struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_* undeclaredNotations;
    struct Int32__Array* condSectionEntityIds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DtdParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_DtdParser__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_.h>
#include <Modloader/app/structs/IDtdParserAdapter.h>
#include <Modloader/app/structs/IDtdParserAdapterWithValidation.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlNameTable.h>
#endif
#undef IL2CPP_STRUCT_DtdParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DtdParser__Fields_FWDDECL)
#include <Modloader/app/structs/DtdParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DtdParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
