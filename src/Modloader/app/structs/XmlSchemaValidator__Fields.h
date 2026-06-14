#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator__Fields_DEFINED)
#include <Modloader/app/structs/ValidatorState__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidationFlags__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaValidationFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_ValidatorState__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaContentProcessing__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaValidator__Fields_DEFINED
struct XmlSchemaSet;
struct SchemaInfo;
struct IDtdInfo;
struct Hashtable;
struct HWStack;
struct ValidationState;
struct SchemaAttDef;
struct IdRefNode;
struct XmlQualifiedName;
struct String;
struct XmlSchemaObject;
struct StringBuilder;
struct ValidationEventHandler;
struct Object;
struct XmlNameTable;
struct IXmlLineInfo;
struct XmlResolver;
struct Uri;
struct IXmlNamespaceResolver;
struct __declspec(align(8)) XmlSchemaValidator__Fields {
    struct XmlSchemaSet* schemaSet;
    XmlSchemaValidationFlags__Enum validationFlags;

    int32_t startIDConstraint;
    bool isRoot;
    bool rootHasSchema;
    bool attrValid;
    bool checkEntity;
    struct SchemaInfo* compiledSchemaInfo;
    struct IDtdInfo* dtdSchemaInfo;
    struct Hashtable* validatedNamespaces;
    struct HWStack* validationStack;
    struct ValidationState* context;
    ValidatorState__Enum currentState;

    struct Hashtable* attPresence;
    struct SchemaAttDef* wildID;
    struct Hashtable* IDs;
    struct IdRefNode* idRefListHead;
    struct XmlQualifiedName* contextQName;
    struct String* NsXs;
    struct String* NsXsi;
    struct String* NsXmlNs;
    struct String* NsXml;
    struct XmlSchemaObject* partialValidationType;
    struct StringBuilder* textValue;
    struct ValidationEventHandler* eventHandler;
    struct Object* validationEventSender;
    struct XmlNameTable* nameTable;
    struct IXmlLineInfo* positionInfo;
    struct IXmlLineInfo* dummyPositionInfo;
    struct XmlResolver* xmlResolver;
    struct Uri* sourceUri;
    struct String* sourceUriString;
    struct IXmlNamespaceResolver* nsResolver;
    XmlSchemaContentProcessing__Enum processContents;

    struct String* xsiTypeString;
    struct String* xsiNilString;
    struct String* xsiSchemaLocationString;
    struct String* xsiNoNamespaceSchemaLocationString;
    struct XmlCharType xmlCharType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaValidator__Fields_FWDDECL
#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IXmlLineInfo.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/IdRefNode.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/ValidationState.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaValidator__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
