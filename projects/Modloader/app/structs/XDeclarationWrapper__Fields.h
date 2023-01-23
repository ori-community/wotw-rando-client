#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDeclarationWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDeclarationWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDeclarationWrapper__Fields_DEFINED)
#include <Modloader/app/structs/XObjectWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XObjectWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XDeclarationWrapper__Fields_DEFINED
struct XDeclaration;
struct XDeclarationWrapper__Fields {
    struct XObjectWrapper__Fields _;
    struct XDeclaration* _Declaration_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDeclarationWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_XDeclarationWrapper__Fields_FWDDECL
#include <Modloader/app/structs/XDeclaration.h>
#endif
#undef IL2CPP_STRUCT_XDeclarationWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDeclarationWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XDeclarationWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/XDeclarationWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDeclarationWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
