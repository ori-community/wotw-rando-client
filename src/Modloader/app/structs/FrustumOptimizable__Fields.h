#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrustumOptimizable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrustumOptimizable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrustumOptimizable__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_FrustumOptimizable__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) FrustumOptimizable__Fields {
    struct Bounds CachedBounds;
    bool Initialized;
    bool IsTransformBased;
    struct Transform* Transform;
    bool LockBounds;
    bool m_insideFrustum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrustumOptimizable__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrustumOptimizable__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FrustumOptimizable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrustumOptimizable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrustumOptimizable__Fields_FWDDECL)
#include <Modloader/app/structs/FrustumOptimizable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrustumOptimizable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
