#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/NativeArray_1_System_Byte_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_System_Byte__DEFINED)
#define IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_DEFINED
struct CameraFrustumOptimizer__Fields {
    struct MonoBehaviour__Fields _;
    bool m_visualDebugRegistered;
    bool m_debugEnabled;
    bool EnableDebugForArtCells;
    bool Debug;
    bool m_enabled;
    struct Vector3 m_lastCalculationCameraPosition;
    bool m_activating;
    struct NativeArray_1_System_Byte_ insideResults;
    int32_t m_forceCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFrustumOptimizer__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFrustumOptimizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFrustumOptimizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
