#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProviderBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProviderBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderBase_DEFINED)
#define IL2CPP_STRUCT_ProviderBase_DEFINED
struct ProviderBase__Class;
struct ProviderBase {
    struct ProviderBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProviderBase_FWDDECL)
#define IL2CPP_STRUCT_ProviderBase_FWDDECL
#include <Modloader/app/structs/ProviderBase__Class.h>
#endif
#undef IL2CPP_STRUCT_ProviderBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderBase_DEFINED) && !defined(IL2CPP_STRUCT_ProviderBase_FWDDECL)
#include <Modloader/app/structs/ProviderBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProviderBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
