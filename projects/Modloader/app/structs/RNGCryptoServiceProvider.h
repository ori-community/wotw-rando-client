#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RNGCryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RNGCryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RNGCryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/RNGCryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_RNGCryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_RNGCryptoServiceProvider_DEFINED
struct RNGCryptoServiceProvider__Class;
struct RNGCryptoServiceProvider {
    struct RNGCryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct RNGCryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RNGCryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_RNGCryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/RNGCryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_RNGCryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RNGCryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_RNGCryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/RNGCryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RNGCryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
