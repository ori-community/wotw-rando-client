#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Parser_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Parser_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser_1__Fields_DEFINED)
#include <Modloader/app/structs/SchemaType__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#if defined(IL2CPP_STRUCT_SchemaType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_Parser_1__Fields_DEFINED
struct XmlNameTable;
struct SchemaNames;
struct ValidationEventHandler;
struct XmlNamespaceManager;
struct XmlReader;
struct PositionInfo;
struct SchemaBuilder;
struct XmlSchema;
struct SchemaInfo;
struct XmlResolver;
struct XmlDocument;
struct XmlNode;
struct String;
struct __declspec(align(8)) Parser_1__Fields {
    SchemaType__Enum schemaType;

    struct XmlNameTable* nameTable;
    struct SchemaNames* schemaNames;
    struct ValidationEventHandler* eventHandler;
    struct XmlNamespaceManager* namespaceManager;
    struct XmlReader* reader;
    struct PositionInfo* positionInfo;
    bool isProcessNamespaces;
    int32_t schemaXmlDepth;
    int32_t markupDepth;
    struct SchemaBuilder* builder;
    struct XmlSchema* schema;
    struct SchemaInfo* xdrSchema;
    struct XmlResolver* xmlResolver;
    struct XmlDocument* dummyDocument;
    bool processMarkup;
    struct XmlNode* parentNode;
    struct XmlNamespaceManager* annotationNSManager;
    struct String* xmlns;
    struct XmlCharType xmlCharType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Parser_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Parser_1__Fields_FWDDECL
#include <Modloader/app/structs/PositionInfo.h>
#include <Modloader/app/structs/SchemaBuilder.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#endif
#undef IL2CPP_STRUCT_Parser_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Parser_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Parser_1__Fields_FWDDECL)
#include <Modloader/app/structs/Parser_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Parser_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
