#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_DEFINED)
#define IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_DEFINED
struct String;
struct XNamespace;
struct NamespaceResolver_NamespaceDeclaration;
struct __declspec(align(8)) NamespaceResolver_NamespaceDeclaration__Fields {
    struct String* prefix;
    struct XNamespace* ns;
    int32_t scope;
    struct NamespaceResolver_NamespaceDeclaration* prev;
};
#endif
#if !defined(IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_FWDDECL)
#define IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_FWDDECL
#include <Modloader/app/structs/NamespaceResolver_NamespaceDeclaration.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XNamespace.h>
#endif
#undef IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceResolver_NamespaceDeclaration__Fields_FWDDECL)
#include <Modloader/app/structs/NamespaceResolver_NamespaceDeclaration__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceResolver_NamespaceDeclaration__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
