#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_DEFINED)
#include <Modloader/app/structs/ValidationType__Enum.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl_ParsingFunction__Enum.h>
#if defined(IL2CPP_STRUCT_ValidationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlValidatingReaderImpl_ParsingFunction__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_DEFINED
struct XmlReader;
struct XmlTextReaderImpl;
struct IXmlNamespaceResolver;
struct BaseValidator;
struct XmlSchemaCollection;
struct XmlValidatingReaderImpl_ValidationEventHandling;
struct XmlParserContext;
struct ReadContentAsBinaryHelper;
struct __declspec(align(8)) XmlValidatingReaderImpl__Fields {
    struct XmlReader* coreReader;
    struct XmlTextReaderImpl* coreReaderImpl;
    struct IXmlNamespaceResolver* coreReaderNSResolver;
    ValidationType__Enum validationType;

    struct BaseValidator* validator;
    struct XmlSchemaCollection* schemaCollection;
    bool processIdentityConstraints;
    XmlValidatingReaderImpl_ParsingFunction__Enum parsingFunction;

    struct XmlValidatingReaderImpl_ValidationEventHandling* eventHandling;
    struct XmlParserContext* parserContext;
    struct ReadContentAsBinaryHelper* readBinaryHelper;
    struct XmlReader* outerReader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_FWDDECL
#include <Modloader/app/structs/BaseValidator.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/ReadContentAsBinaryHelper.h>
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchemaCollection.h>
#include <Modloader/app/structs/XmlTextReaderImpl.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl_ValidationEventHandling.h>
#endif
#undef IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlValidatingReaderImpl__Fields_FWDDECL)
#include <Modloader/app/structs/XmlValidatingReaderImpl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlValidatingReaderImpl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
