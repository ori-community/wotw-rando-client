#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ExtensionEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ExtensionEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionEnumerator_DEFINED)
#include <Modloader/app/structs/X509ExtensionEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_X509ExtensionEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ExtensionEnumerator_DEFINED
struct X509ExtensionEnumerator__Class;
struct X509ExtensionEnumerator {
    struct X509ExtensionEnumerator__Class* klass;
    MonitorData* monitor;
    struct X509ExtensionEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ExtensionEnumerator_FWDDECL)
#define IL2CPP_STRUCT_X509ExtensionEnumerator_FWDDECL
#include <Modloader/app/structs/X509ExtensionEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ExtensionEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_X509ExtensionEnumerator_FWDDECL)
#include <Modloader/app/structs/X509ExtensionEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ExtensionEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
