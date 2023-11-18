#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC2CryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC2CryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2CryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/RC2CryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_RC2CryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_RC2CryptoServiceProvider_DEFINED
struct RC2CryptoServiceProvider__Class;
struct RC2CryptoServiceProvider {
    struct RC2CryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct RC2CryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RC2CryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_RC2CryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/RC2CryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_RC2CryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC2CryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_RC2CryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/RC2CryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC2CryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
