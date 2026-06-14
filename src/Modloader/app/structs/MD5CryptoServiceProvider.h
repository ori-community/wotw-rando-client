#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD5CryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD5CryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/MD5CryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_MD5CryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_MD5CryptoServiceProvider_DEFINED
struct MD5CryptoServiceProvider__Class;
struct MD5CryptoServiceProvider {
    struct MD5CryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct MD5CryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_MD5CryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/MD5CryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_MD5CryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_MD5CryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/MD5CryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD5CryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
