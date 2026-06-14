#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509KeyUsageExtension_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509KeyUsageExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyUsageExtension_DEFINED)
#include <Modloader/app/structs/X509KeyUsageExtension__Fields.h>
#if defined(IL2CPP_STRUCT_X509KeyUsageExtension__Fields_DEFINED)
#define IL2CPP_STRUCT_X509KeyUsageExtension_DEFINED
struct X509KeyUsageExtension__Class;
struct X509KeyUsageExtension {
    struct X509KeyUsageExtension__Class* klass;
    MonitorData* monitor;
    struct X509KeyUsageExtension__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509KeyUsageExtension_FWDDECL)
#define IL2CPP_STRUCT_X509KeyUsageExtension_FWDDECL
#include <Modloader/app/structs/X509KeyUsageExtension__Class.h>
#endif
#undef IL2CPP_STRUCT_X509KeyUsageExtension_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509KeyUsageExtension_DEFINED) && !defined(IL2CPP_STRUCT_X509KeyUsageExtension_FWDDECL)
#include <Modloader/app/structs/X509KeyUsageExtension.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509KeyUsageExtension.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
