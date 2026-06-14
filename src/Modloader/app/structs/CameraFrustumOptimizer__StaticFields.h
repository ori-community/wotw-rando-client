#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_DEFINED)
#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache.h>
#if defined(IL2CPP_STRUCT_CameraFrustumOptimizer_BoundsCache_DEFINED)
#define IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_DEFINED
struct AllContainer_1_IFrustumOptimizable_;
struct List_1_IFrustumOptimizable_;
struct List_1_Game_IFrustumEnabled_;
struct List_1_CameraFrustumOptimizer_EarlyZActivation_;
struct CameraFrustumOptimizer__StaticFields {
    struct CameraFrustumOptimizer_BoundsCache s_cachedBounds1;
    struct CameraFrustumOptimizer_BoundsCache s_cachedBounds2;
    float UpdateDelta;
    float Padding;
    bool m_useBatchedFrustumChecks;
    bool m_deferActivations;
    bool m_useBoundsCache;
    bool m_verifyCacheCorrectness;
    bool UseMoonFlags;
    struct AllContainer_1_IFrustumOptimizable_* s_frustumOptimizables;
    struct List_1_IFrustumOptimizable_* s_unitializedFrustumOptimizables;
    struct List_1_Game_IFrustumEnabled_* s_instantEnabledToProcess;
    struct List_1_IFrustumOptimizable_* m_deferredOnEnter;
    struct List_1_IFrustumOptimizable_* m_deferredOnExit;
    struct List_1_CameraFrustumOptimizer_EarlyZActivation_* s_earlyZActivations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_FWDDECL
#include <Modloader/app/structs/AllContainer_1_IFrustumOptimizable_.h>
#include <Modloader/app/structs/List_1_CameraFrustumOptimizer_EarlyZActivation_.h>
#include <Modloader/app/structs/List_1_Game_IFrustumEnabled_.h>
#include <Modloader/app/structs/List_1_IFrustumOptimizable_.h>
#endif
#undef IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__StaticFields_FWDDECL)
#include <Modloader/app/structs/CameraFrustumOptimizer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFrustumOptimizer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
