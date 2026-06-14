#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNamespaceManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNamespaceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNamespaceManager__Fields_DEFINED
struct XmlNamespaceManager_NamespaceDeclaration__Array;
struct XmlNameTable;
struct Dictionary_2_System_String_System_Int32_;
struct String;
struct __declspec(align(8)) XmlNamespaceManager__Fields {
    struct XmlNamespaceManager_NamespaceDeclaration__Array* nsdecls;
    int32_t lastDecl;
    struct XmlNameTable* nameTable;
    int32_t scopeId;
    struct Dictionary_2_System_String_System_Int32_* hashTable;
    bool useHashtable;
    struct String* xml;
    struct String* xmlNs;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNamespaceManager__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlNamespaceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNamespaceManager__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNamespaceManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNamespaceManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
