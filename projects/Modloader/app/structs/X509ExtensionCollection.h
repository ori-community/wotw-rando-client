#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ExtensionCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ExtensionCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionCollection_DEFINED)
#include <Modloader/app/structs/X509ExtensionCollection__Fields.h>
#if defined(IL2CPP_STRUCT_X509ExtensionCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ExtensionCollection_DEFINED
struct X509ExtensionCollection__Class;
struct X509ExtensionCollection {
    struct X509ExtensionCollection__Class* klass;
    MonitorData* monitor;
    struct X509ExtensionCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ExtensionCollection_FWDDECL)
#define IL2CPP_STRUCT_X509ExtensionCollection_FWDDECL
#include <Modloader/app/structs/X509ExtensionCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ExtensionCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ExtensionCollection_DEFINED) && !defined(IL2CPP_STRUCT_X509ExtensionCollection_FWDDECL)
#include <Modloader/app/structs/X509ExtensionCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ExtensionCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
