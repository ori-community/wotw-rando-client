#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdValidatingReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdValidatingReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidatingReader__Fields_DEFINED)
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XsdValidatingReader_ValidatingReaderState__Enum.h>
#if defined(IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XsdValidatingReader__Fields_DEFINED
struct XmlReader;
struct IXmlNamespaceResolver;
struct XmlSchemaValidator;
struct XmlResolver;
struct ValidationEventHandler;
struct XmlValueGetter;
struct XmlNamespaceManager;
struct ValidatingReaderNodeData;
struct AttributePSVIInfo;
struct AttributePSVIInfo__Array;
struct ArrayList;
struct Parser_1;
struct Object;
struct XmlSchemaInfo;
struct String;
struct XmlNameTable;
struct XsdCachingReader;
struct IXmlLineInfo;
struct ReadContentAsBinaryHelper;
struct __declspec(align(8)) XsdValidatingReader__Fields {
    struct XmlReader* coreReader;
    struct IXmlNamespaceResolver* coreReaderNSResolver;
    struct IXmlNamespaceResolver* thisNSResolver;
    struct XmlSchemaValidator* validator;
    struct XmlResolver* xmlResolver;
    struct ValidationEventHandler* validationEvent;
    XsdValidatingReader_ValidatingReaderState__Enum validationState;

    struct XmlValueGetter* valueGetter;
    struct XmlNamespaceManager* nsManager;
    bool manageNamespaces;
    bool processInlineSchema;
    bool replayCache;
    struct ValidatingReaderNodeData* cachedNode;
    struct AttributePSVIInfo* attributePSVI;
    int32_t attributeCount;
    int32_t coreReaderAttributeCount;
    int32_t currentAttrIndex;
    struct AttributePSVIInfo__Array* attributePSVINodes;
    struct ArrayList* defaultAttributes;
    struct Parser_1* inlineSchemaParser;
    struct Object* atomicValue;
    struct XmlSchemaInfo* xmlSchemaInfo;
    struct String* originalAtomicValueString;
    struct XmlNameTable* coreReaderNameTable;
    struct XsdCachingReader* cachingReader;
    struct ValidatingReaderNodeData* textNode;
    struct String* NsXmlNs;
    struct String* NsXs;
    struct String* NsXsi;
    struct String* XsiType;
    struct String* XsiNil;
    struct String* XsdSchema;
    struct String* XsiSchemaLocation;
    struct String* XsiNoNamespaceSchemaLocation;
    struct XmlCharType xmlCharType;
    struct IXmlLineInfo* lineInfo;
    struct ReadContentAsBinaryHelper* readBinaryHelper;
    XsdValidatingReader_ValidatingReaderState__Enum savedState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdValidatingReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdValidatingReader__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/AttributePSVIInfo.h>
#include <Modloader/app/structs/AttributePSVIInfo__Array.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Parser_1.h>
#include <Modloader/app/structs/ReadContentAsBinaryHelper.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaInfo.h>
#include <Modloader/app/structs/XmlSchemaValidator.h>
#include <Modloader/app/structs/XmlValueGetter.h>
#include <Modloader/app/structs/XsdCachingReader.h>
#endif
#undef IL2CPP_STRUCT_XsdValidatingReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidatingReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdValidatingReader__Fields_FWDDECL)
#include <Modloader/app/structs/XsdValidatingReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdValidatingReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
