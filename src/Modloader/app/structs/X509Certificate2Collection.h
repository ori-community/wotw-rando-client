#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate2Collection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate2Collection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2Collection_DEFINED)
#include <Modloader/app/structs/X509Certificate2Collection__Fields.h>
#if defined(IL2CPP_STRUCT_X509Certificate2Collection__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Certificate2Collection_DEFINED
struct X509Certificate2Collection__Class;
struct X509Certificate2Collection {
    struct X509Certificate2Collection__Class* klass;
    MonitorData* monitor;
    struct X509Certificate2Collection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate2Collection_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate2Collection_FWDDECL
#include <Modloader/app/structs/X509Certificate2Collection__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate2Collection_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2Collection_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate2Collection_FWDDECL)
#include <Modloader/app/structs/X509Certificate2Collection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate2Collection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
