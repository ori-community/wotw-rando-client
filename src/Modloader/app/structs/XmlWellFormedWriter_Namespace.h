#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_DEFINED)
#include <Modloader/app/structs/XmlWellFormedWriter_NamespaceKind__Enum.h>
#if defined(IL2CPP_STRUCT_XmlWellFormedWriter_NamespaceKind__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_DEFINED
struct String;
struct XmlWellFormedWriter_Namespace {
    struct String* prefix;
    struct String* namespaceUri;
    XmlWellFormedWriter_NamespaceKind__Enum kind;

    int32_t prevNsIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Namespace_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
