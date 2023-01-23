#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProviderCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProviderCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderCollection_DEFINED)
#define IL2CPP_STRUCT_ProviderCollection_DEFINED
struct ProviderCollection__Class;
struct ProviderCollection {
    struct ProviderCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProviderCollection_FWDDECL)
#define IL2CPP_STRUCT_ProviderCollection_FWDDECL
#include <Modloader/app/structs/ProviderCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ProviderCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderCollection_DEFINED) && !defined(IL2CPP_STRUCT_ProviderCollection_FWDDECL)
#include <Modloader/app/structs/ProviderCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProviderCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
