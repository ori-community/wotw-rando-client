#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_DEFINED)
#define IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_DEFINED
struct String;
struct XmlNamespaceManager_NamespaceDeclaration {
    struct String* prefix;
    struct String* uri;
    int32_t scopeId;
    int32_t previousNsIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_FWDDECL)
#define IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_DEFINED) && !defined(IL2CPP_STRUCT_XmlNamespaceManager_NamespaceDeclaration_FWDDECL)
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
