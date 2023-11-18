#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSACryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSACryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/DSACryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DSACryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DSACryptoServiceProvider_DEFINED
struct DSACryptoServiceProvider__Class;
struct DSACryptoServiceProvider {
    struct DSACryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct DSACryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_DSACryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/DSACryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DSACryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSACryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_DSACryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/DSACryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSACryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
