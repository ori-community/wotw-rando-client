#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsProvider_DEFINED)
#define IL2CPP_STRUCT_MonoTlsProvider_DEFINED
struct MonoTlsProvider__Class;
struct MonoTlsProvider {
    struct MonoTlsProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsProvider_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsProvider_FWDDECL
#include <Modloader/app/structs/MonoTlsProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsProvider_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsProvider_FWDDECL)
#include <Modloader/app/structs/MonoTlsProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
