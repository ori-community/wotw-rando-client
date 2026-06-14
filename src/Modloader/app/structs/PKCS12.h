#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS12_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS12_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_DEFINED)
#include <Modloader/app/structs/PKCS12__Fields.h>
#if defined(IL2CPP_STRUCT_PKCS12__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS12_DEFINED
struct PKCS12__Class;
struct PKCS12 {
    struct PKCS12__Class* klass;
    MonitorData* monitor;
    struct PKCS12__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PKCS12_FWDDECL)
#define IL2CPP_STRUCT_PKCS12_FWDDECL
#include <Modloader/app/structs/PKCS12__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS12_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_DEFINED) && !defined(IL2CPP_STRUCT_PKCS12_FWDDECL)
#include <Modloader/app/structs/PKCS12.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS12.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
