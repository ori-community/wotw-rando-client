#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDocument__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDocument__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocument__Fields_DEFINED)
#include <Modloader/app/structs/XmlNode__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDocument__Fields_DEFINED
struct XmlImplementation;
struct DomNameTable;
struct XmlLinkedNode;
struct XmlNamedNodeMap;
struct Hashtable;
struct SchemaInfo;
struct XmlSchemaSet;
struct XmlNodeChangedEventHandler;
struct String;
struct XmlResolver;
struct Object;
struct XmlDocument__Fields {
    struct XmlNode__Fields _;
    struct XmlImplementation* implementation;
    struct DomNameTable* domNameTable;
    struct XmlLinkedNode* lastChild;
    struct XmlNamedNodeMap* entities;
    struct Hashtable* htElementIdMap;
    struct Hashtable* htElementIDAttrDecl;
    struct SchemaInfo* schemaInfo;
    struct XmlSchemaSet* schemas;
    bool reportValidity;
    bool actualLoadingStatus;
    struct XmlNodeChangedEventHandler* onNodeInsertingDelegate;
    struct XmlNodeChangedEventHandler* onNodeInsertedDelegate;
    struct XmlNodeChangedEventHandler* onNodeRemovingDelegate;
    struct XmlNodeChangedEventHandler* onNodeRemovedDelegate;
    struct XmlNodeChangedEventHandler* onNodeChangingDelegate;
    struct XmlNodeChangedEventHandler* onNodeChangedDelegate;
    bool fEntRefNodesPresent;
    bool fCDataNodesPresent;
    bool preserveWhitespace;
    bool isLoading;
    struct String* strDocumentName;
    struct String* strDocumentFragmentName;
    struct String* strCommentName;
    struct String* strTextName;
    struct String* strCDataSectionName;
    struct String* strEntityName;
    struct String* strID;
    struct String* strXmlns;
    struct String* strXml;
    struct String* strSpace;
    struct String* strLang;
    struct String* strEmpty;
    struct String* strNonSignificantWhitespaceName;
    struct String* strSignificantWhitespaceName;
    struct String* strReservedXmlns;
    struct String* strReservedXml;
    struct String* baseURI;
    struct XmlResolver* resolver;
    bool bSetResolver;
    struct Object* objLock;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDocument__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlDocument__Fields_FWDDECL
#include <Modloader/app/structs/DomNameTable.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlImplementation.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#include <Modloader/app/structs/XmlNodeChangedEventHandler.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#endif
#undef IL2CPP_STRUCT_XmlDocument__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocument__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlDocument__Fields_FWDDECL)
#include <Modloader/app/structs/XmlDocument__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDocument__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
