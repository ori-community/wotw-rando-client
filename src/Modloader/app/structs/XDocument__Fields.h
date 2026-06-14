#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDocument__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDocument__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocument__Fields_DEFINED)
#include <Modloader/app/structs/XContainer__Fields.h>
#if defined(IL2CPP_STRUCT_XContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_XDocument__Fields_DEFINED
struct XDeclaration;
struct XDocument__Fields {
    struct XContainer__Fields _;
    struct XDeclaration* declaration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDocument__Fields_FWDDECL)
#define IL2CPP_STRUCT_XDocument__Fields_FWDDECL
#include <Modloader/app/structs/XDeclaration.h>
#endif
#undef IL2CPP_STRUCT_XDocument__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocument__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XDocument__Fields_FWDDECL)
#include <Modloader/app/structs/XDocument__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDocument__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
