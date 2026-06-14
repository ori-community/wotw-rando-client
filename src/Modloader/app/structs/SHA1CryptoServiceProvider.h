#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA1CryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA1CryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/SHA1CryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA1CryptoServiceProvider_DEFINED
struct SHA1CryptoServiceProvider__Class;
struct SHA1CryptoServiceProvider {
    struct SHA1CryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct SHA1CryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_SHA1CryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/SHA1CryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA1CryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_SHA1CryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/SHA1CryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA1CryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
