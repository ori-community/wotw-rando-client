#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSACryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSACryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSACryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/RSACryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_RSACryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_RSACryptoServiceProvider_DEFINED
struct RSACryptoServiceProvider__Class;
struct RSACryptoServiceProvider {
    struct RSACryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct RSACryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSACryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_RSACryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/RSACryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_RSACryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSACryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_RSACryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/RSACryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSACryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
