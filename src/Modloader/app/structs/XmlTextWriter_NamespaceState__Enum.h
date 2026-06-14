#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_DEFINED
enum class XmlTextWriter_NamespaceState__Enum : int32_t {
    Uninitialized = 0x00000000,
    NotDeclaredButInScope = 0x00000001,
    DeclaredButNotWrittenOut = 0x00000002,
    DeclaredAndWrittenOut = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter_NamespaceState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter_NamespaceState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
