#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ExtensionCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ExtensionCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionCollection__Fields_DEFINED)
#include <Modloader/app/structs/CollectionBase__Fields.h>
#if defined(IL2CPP_STRUCT_CollectionBase__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ExtensionCollection__Fields_DEFINED
struct X509ExtensionCollection__Fields {
    struct CollectionBase__Fields _;
    bool readOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ExtensionCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509ExtensionCollection__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_X509ExtensionCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509ExtensionCollection__Fields_FWDDECL)
#include <Modloader/app/structs/X509ExtensionCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ExtensionCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
