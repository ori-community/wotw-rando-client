#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFrustumOptimizable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFrustumOptimizable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrustumOptimizable_DEFINED)
#define IL2CPP_STRUCT_IFrustumOptimizable_DEFINED
struct IFrustumOptimizable__Class;
struct IFrustumOptimizable {
    struct IFrustumOptimizable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFrustumOptimizable_FWDDECL)
#define IL2CPP_STRUCT_IFrustumOptimizable_FWDDECL
#include <Modloader/app/structs/IFrustumOptimizable__Class.h>
#endif
#undef IL2CPP_STRUCT_IFrustumOptimizable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrustumOptimizable_DEFINED) && !defined(IL2CPP_STRUCT_IFrustumOptimizable_FWDDECL)
#include <Modloader/app/structs/IFrustumOptimizable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFrustumOptimizable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
