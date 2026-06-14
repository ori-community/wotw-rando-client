#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DESCryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DESCryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESCryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/DESCryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DESCryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DESCryptoServiceProvider_DEFINED
struct DESCryptoServiceProvider__Class;
struct DESCryptoServiceProvider {
    struct DESCryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct DESCryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DESCryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_DESCryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/DESCryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DESCryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DESCryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_DESCryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/DESCryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DESCryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
