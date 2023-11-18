#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_DEFINED)
#define IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_DEFINED
struct MeshRenderer;
struct CameraFrustumOptimizer_EarlyZActivation {
    struct MeshRenderer* renderer;
    int32_t delayCount;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_FWDDECL)
#define IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_FWDDECL
#include <Modloader/app/structs/MeshRenderer.h>
#endif
#undef IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_DEFINED) && !defined(IL2CPP_STRUCT_CameraFrustumOptimizer_EarlyZActivation_FWDDECL)
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
