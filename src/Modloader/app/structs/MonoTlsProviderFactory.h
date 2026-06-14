#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsProviderFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsProviderFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsProviderFactory_DEFINED)
#define IL2CPP_STRUCT_MonoTlsProviderFactory_DEFINED
struct MonoTlsProviderFactory__Class;
struct MonoTlsProviderFactory {
    struct MonoTlsProviderFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsProviderFactory_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsProviderFactory_FWDDECL
#include <Modloader/app/structs/MonoTlsProviderFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsProviderFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsProviderFactory_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsProviderFactory_FWDDECL)
#include <Modloader/app/structs/MonoTlsProviderFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsProviderFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
