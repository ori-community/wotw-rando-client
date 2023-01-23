#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_DEFINED)
#include <Modloader/app/structs/XmlNodeWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_DEFINED
struct XmlDeclaration;
struct XmlDeclarationWrapper__Fields {
    struct XmlNodeWrapper__Fields _;
    struct XmlDeclaration* _declaration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_FWDDECL
#include <Modloader/app/structs/XmlDeclaration.h>
#endif
#undef IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlDeclarationWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/XmlDeclarationWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDeclarationWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
