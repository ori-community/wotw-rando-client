#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWriterSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWriterSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriterSettings__Fields_DEFINED)
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/NamespaceHandling__Enum.h>
#include <Modloader/app/structs/NewLineHandling__Enum.h>
#include <Modloader/app/structs/TriState__Enum.h>
#include <Modloader/app/structs/XmlOutputMethod__Enum.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#if defined(IL2CPP_STRUCT_NewLineHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_TriState__Enum_DEFINED) && defined(IL2CPP_STRUCT_NamespaceHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConformanceLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlOutputMethod__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlStandalone__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlWriterSettings__Fields_DEFINED
struct Encoding;
struct String;
struct List_1_System_Xml_XmlQualifiedName_;
struct __declspec(align(8)) XmlWriterSettings__Fields {
    bool useAsync;
    struct Encoding* encoding;
    bool omitXmlDecl;
    NewLineHandling__Enum newLineHandling;

    struct String* newLineChars;
    TriState__Enum indent;

    struct String* indentChars;
    bool newLineOnAttributes;
    bool closeOutput;
    NamespaceHandling__Enum namespaceHandling;

    ConformanceLevel__Enum conformanceLevel;

    bool checkCharacters;
    bool writeEndDocumentOnClose;
    XmlOutputMethod__Enum outputMethod;

    struct List_1_System_Xml_XmlQualifiedName_* cdataSections;
    bool doNotEscapeUriAttributes;
    bool mergeCDataSections;
    struct String* mediaType;
    struct String* docTypeSystem;
    struct String* docTypePublic;
    XmlStandalone__Enum standalone;

    bool autoXmlDecl;
    bool isReadOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWriterSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlWriterSettings__Fields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/List_1_System_Xml_XmlQualifiedName_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlWriterSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWriterSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlWriterSettings__Fields_FWDDECL)
#include <Modloader/app/structs/XmlWriterSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWriterSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
