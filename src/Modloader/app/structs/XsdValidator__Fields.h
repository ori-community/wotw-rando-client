#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidator__Fields_DEFINED)
#include <Modloader/app/structs/BaseValidator__Fields.h>
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>
#if defined(IL2CPP_STRUCT_BaseValidator__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaContentProcessing__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdValidator__Fields_DEFINED
struct HWStack;
struct Hashtable;
struct XmlNamespaceManager;
struct IdRefNode;
struct Parser_1;
struct String;
struct XsdValidator__Fields {
    struct BaseValidator__Fields _;
    int32_t startIDConstraint;
    struct HWStack* validationStack;
    struct Hashtable* attPresence;
    struct XmlNamespaceManager* nsManager;
    bool bManageNamespaces;
    struct Hashtable* IDs;
    struct IdRefNode* idRefListHead;
    struct Parser_1* inlineSchemaParser;
    XmlSchemaContentProcessing__Enum processContents;

    struct String* NsXmlNs;
    struct String* NsXs;
    struct String* NsXsi;
    struct String* XsiType;
    struct String* XsiNil;
    struct String* XsiSchemaLocation;
    struct String* XsiNoNamespaceSchemaLocation;
    struct String* XsdSchema;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdValidator__Fields_FWDDECL
#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IdRefNode.h>
#include <Modloader/app/structs/Parser_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#endif
#undef IL2CPP_STRUCT_XsdValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdValidator__Fields_FWDDECL)
#include <Modloader/app/structs/XsdValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
