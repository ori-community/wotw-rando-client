#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_DEFINED)
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo__Fields.h>
#if defined(IL2CPP_STRUCT_PKCS8_PrivateKeyInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_DEFINED
struct PKCS8_PrivateKeyInfo__Class;
struct PKCS8_PrivateKeyInfo {
    struct PKCS8_PrivateKeyInfo__Class* klass;
    MonitorData* monitor;
    struct PKCS8_PrivateKeyInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_FWDDECL)
#define IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_FWDDECL
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_DEFINED) && !defined(IL2CPP_STRUCT_PKCS8_PrivateKeyInfo_FWDDECL)
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
