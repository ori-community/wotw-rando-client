#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Certificate2Impl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Certificate2Impl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2Impl_DEFINED)
#include <Modloader/app/structs/X509Certificate2Impl__Fields.h>
#if defined(IL2CPP_STRUCT_X509Certificate2Impl__Fields_DEFINED)
#define IL2CPP_STRUCT_X509Certificate2Impl_DEFINED
struct X509Certificate2Impl__Class;
struct X509Certificate2Impl {
    struct X509Certificate2Impl__Class* klass;
    MonitorData* monitor;
    struct X509Certificate2Impl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509Certificate2Impl_FWDDECL)
#define IL2CPP_STRUCT_X509Certificate2Impl_FWDDECL
#include <Modloader/app/structs/X509Certificate2Impl__Class.h>
#endif
#undef IL2CPP_STRUCT_X509Certificate2Impl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Certificate2Impl_DEFINED) && !defined(IL2CPP_STRUCT_X509Certificate2Impl_FWDDECL)
#include <Modloader/app/structs/X509Certificate2Impl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Certificate2Impl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
