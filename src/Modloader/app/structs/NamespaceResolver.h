#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceResolver_DEFINED)
#define IL2CPP_STRUCT_NamespaceResolver_DEFINED
struct NamespaceResolver_NamespaceDeclaration;
struct NamespaceResolver {
    int32_t scope;
    struct NamespaceResolver_NamespaceDeclaration* declaration;
    struct NamespaceResolver_NamespaceDeclaration* rover;
};
#endif
#if !defined(IL2CPP_STRUCT_NamespaceResolver_FWDDECL)
#define IL2CPP_STRUCT_NamespaceResolver_FWDDECL
#include <Modloader/app/structs/NamespaceResolver_NamespaceDeclaration.h>
#endif
#undef IL2CPP_STRUCT_NamespaceResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceResolver_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceResolver_FWDDECL)
#include <Modloader/app/structs/NamespaceResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
