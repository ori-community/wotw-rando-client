#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceCache_DEFINED)
#define IL2CPP_STRUCT_NamespaceCache_DEFINED
struct XNamespace;
struct String;
struct NamespaceCache {
    struct XNamespace* ns;
    struct String* namespaceName;
};
#endif
#if !defined(IL2CPP_STRUCT_NamespaceCache_FWDDECL)
#define IL2CPP_STRUCT_NamespaceCache_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XNamespace.h>
#endif
#undef IL2CPP_STRUCT_NamespaceCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceCache_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceCache_FWDDECL)
#include <Modloader/app/structs/NamespaceCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
