#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AesCryptoServiceProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AesCryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesCryptoServiceProvider_DEFINED)
#include <Modloader/app/structs/AesCryptoServiceProvider__Fields.h>
#if defined(IL2CPP_STRUCT_AesCryptoServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_AesCryptoServiceProvider_DEFINED
struct AesCryptoServiceProvider__Class;
struct AesCryptoServiceProvider {
    struct AesCryptoServiceProvider__Class* klass;
    MonitorData* monitor;
    struct AesCryptoServiceProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AesCryptoServiceProvider_FWDDECL)
#define IL2CPP_STRUCT_AesCryptoServiceProvider_FWDDECL
#include <Modloader/app/structs/AesCryptoServiceProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_AesCryptoServiceProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesCryptoServiceProvider_DEFINED) && !defined(IL2CPP_STRUCT_AesCryptoServiceProvider_FWDDECL)
#include <Modloader/app/structs/AesCryptoServiceProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AesCryptoServiceProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
