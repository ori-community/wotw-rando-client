#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrValidator__Fields_DEFINED)
#include <Modloader/app/structs/BaseValidator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrValidator__Fields_DEFINED
struct HWStack;
struct Hashtable;
struct XmlQualifiedName;
struct XmlNamespaceManager;
struct IdRefNode;
struct Parser_1;
struct XdrValidator__Fields {
    struct BaseValidator__Fields _;
    struct HWStack* validationStack;
    struct Hashtable* attPresence;
    struct XmlQualifiedName* name;
    struct XmlNamespaceManager* nsManager;
    bool isProcessContents;
    struct Hashtable* IDs;
    struct IdRefNode* idRefListHead;
    struct Parser_1* inlineSchemaParser;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrValidator__Fields_FWDDECL
#include <Modloader/app/structs/HWStack.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IdRefNode.h>
#include <Modloader/app/structs/Parser_1.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_XdrValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrValidator__Fields_FWDDECL)
#include <Modloader/app/structs/XdrValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
