#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrustumOptimizable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrustumOptimizable_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrustumOptimizable_DEFINED)
#include <Modloader/app/structs/FrustumOptimizable__Fields.h>
#if defined(IL2CPP_STRUCT_FrustumOptimizable__Fields_DEFINED)
#define IL2CPP_STRUCT_FrustumOptimizable_DEFINED
struct FrustumOptimizable__Class;
struct FrustumOptimizable {
    struct FrustumOptimizable__Class* klass;
    MonitorData* monitor;
    struct FrustumOptimizable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrustumOptimizable_FWDDECL)
#define IL2CPP_STRUCT_FrustumOptimizable_FWDDECL
#include <Modloader/app/structs/FrustumOptimizable__Class.h>
#endif
#undef IL2CPP_STRUCT_FrustumOptimizable_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrustumOptimizable_DEFINED) && !defined(IL2CPP_STRUCT_FrustumOptimizable_FWDDECL)
#include <Modloader/app/structs/FrustumOptimizable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrustumOptimizable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
