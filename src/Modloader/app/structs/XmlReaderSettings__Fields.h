#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReaderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReaderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReaderSettings__Fields_DEFINED)
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/DtdProcessing__Enum.h>
#include <Modloader/app/structs/ValidationType__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidationFlags__Enum.h>
#if defined(IL2CPP_STRUCT_ConformanceLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_DtdProcessing__Enum_DEFINED) && defined(IL2CPP_STRUCT_ValidationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaValidationFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlReaderSettings__Fields_DEFINED
struct XmlNameTable;
struct XmlResolver;
struct XmlSchemaSet;
struct ValidationEventHandler;
struct __declspec(align(8)) XmlReaderSettings__Fields {
    bool useAsync;
    struct XmlNameTable* nameTable;
    struct XmlResolver* xmlResolver;
    int32_t lineNumberOffset;
    int32_t linePositionOffset;
    ConformanceLevel__Enum conformanceLevel;

    bool checkCharacters;
    int64_t maxCharactersInDocument;
    int64_t maxCharactersFromEntities;
    bool ignoreWhitespace;
    bool ignorePIs;
    bool ignoreComments;
    DtdProcessing__Enum dtdProcessing;

    ValidationType__Enum validationType;

    XmlSchemaValidationFlags__Enum validationFlags;

    struct XmlSchemaSet* schemas;
    struct ValidationEventHandler* valEventHandler;
    bool closeInput;
    bool isReadOnly;
    bool _IsXmlResolverSet_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlReaderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlReaderSettings__Fields_FWDDECL
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#endif
#undef IL2CPP_STRUCT_XmlReaderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReaderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlReaderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/XmlReaderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReaderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
