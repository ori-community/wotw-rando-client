#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS12_DeriveBytes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS12_DeriveBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes_DEFINED)
#include <Modloader/app/structs/PKCS12_DeriveBytes__Fields.h>
#if defined(IL2CPP_STRUCT_PKCS12_DeriveBytes__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS12_DeriveBytes_DEFINED
struct PKCS12_DeriveBytes__Class;
struct PKCS12_DeriveBytes {
    struct PKCS12_DeriveBytes__Class* klass;
    MonitorData* monitor;
    struct PKCS12_DeriveBytes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes_FWDDECL)
#define IL2CPP_STRUCT_PKCS12_DeriveBytes_FWDDECL
#include <Modloader/app/structs/PKCS12_DeriveBytes__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS12_DeriveBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes_DEFINED) && !defined(IL2CPP_STRUCT_PKCS12_DeriveBytes_FWDDECL)
#include <Modloader/app/structs/PKCS12_DeriveBytes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS12_DeriveBytes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
