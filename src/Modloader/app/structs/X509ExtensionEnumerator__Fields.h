#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_DEFINED
struct IEnumerator;
struct __declspec(align(8)) X509ExtensionEnumerator__Fields {
    struct IEnumerator* enumerator;
};
#endif
#if !defined(IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/IEnumerator.h>
#endif
#undef IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/X509ExtensionEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ExtensionEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
