#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter__Fields_DEFINED)
#include <Modloader/app/structs/ConformanceLevel__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlWellFormedWriter_SpecialAttribute__Enum.h>
#include <Modloader/app/structs/XmlWellFormedWriter_State__Enum.h>
#include <Modloader/app/structs/XmlWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlWellFormedWriter_SpecialAttribute__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConformanceLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter__Fields_DEFINED
struct XmlWriter;
struct XmlRawWriter;
struct IXmlNamespaceResolver;
struct XmlWellFormedWriter_Namespace__Array;
struct Dictionary_2_System_String_System_Int32_;
struct XmlWellFormedWriter_ElementScope__Array;
struct XmlWellFormedWriter_AttrName__Array;
struct XmlWellFormedWriter_AttributeValueCache;
struct String;
struct XmlWellFormedWriter_State__Enum__Array;
struct SecureStringHasher;
struct XmlWellFormedWriter__Fields {
    struct XmlWriter__Fields _;
    struct XmlWriter* writer;
    struct XmlRawWriter* rawWriter;
    struct IXmlNamespaceResolver* predefinedNamespaces;
    struct XmlWellFormedWriter_Namespace__Array* nsStack;
    int32_t nsTop;
    struct Dictionary_2_System_String_System_Int32_* nsHashtable;
    bool useNsHashtable;
    struct XmlWellFormedWriter_ElementScope__Array* elemScopeStack;
    int32_t elemTop;
    struct XmlWellFormedWriter_AttrName__Array* attrStack;
    int32_t attrCount;
    struct Dictionary_2_System_String_System_Int32_* attrHashTable;
    XmlWellFormedWriter_SpecialAttribute__Enum specAttr;

    struct XmlWellFormedWriter_AttributeValueCache* attrValueCache;
    struct String* curDeclPrefix;
    struct XmlWellFormedWriter_State__Enum__Array* stateTable;
    XmlWellFormedWriter_State__Enum currentState;

    bool checkCharacters;
    bool omitDuplNamespaces;
    bool writeEndDocumentOnClose;
    ConformanceLevel__Enum conformanceLevel;

    bool dtdWritten;
    bool xmlDeclFollows;
    struct XmlCharType xmlCharType;
    struct SecureStringHasher* hasher;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/SecureStringHasher.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlRawWriter.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache.h>
#include <Modloader/app/structs/XmlWellFormedWriter_ElementScope__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_State__Enum__Array.h>
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
