#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAManaged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAManaged_DEFINED)
#include <Modloader/app/structs/RSAManaged__Fields.h>
#if defined(IL2CPP_STRUCT_RSAManaged__Fields_DEFINED)
#define IL2CPP_STRUCT_RSAManaged_DEFINED
struct RSAManaged__Class;
struct RSAManaged {
    struct RSAManaged__Class* klass;
    MonitorData* monitor;
    struct RSAManaged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAManaged_FWDDECL)
#define IL2CPP_STRUCT_RSAManaged_FWDDECL
#include <Modloader/app/structs/RSAManaged__Class.h>
#endif
#undef IL2CPP_STRUCT_RSAManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAManaged_DEFINED) && !defined(IL2CPP_STRUCT_RSAManaged_FWDDECL)
#include <Modloader/app/structs/RSAManaged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAManaged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
