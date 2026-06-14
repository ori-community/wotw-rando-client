#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_DEFINED)
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Bounds_.h>
#if defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Bounds__DEFINED)
#define IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_DEFINED
struct Int32__Array;
struct CameraFrustumOptimizer_BoundsCache {
    struct NativeArray_1_UnityEngine_Bounds_ cachedBounds;
    struct Int32__Array* nonCachable;
    int32_t cachedBoundsCount;
    int32_t nonCachableCount;
    bool dirty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_FWDDECL)
#define IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_DEFINED) && !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_FWDDECL)
#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
